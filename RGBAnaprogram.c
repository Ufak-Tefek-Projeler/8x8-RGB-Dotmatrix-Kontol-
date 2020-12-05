#include <18F46k22.h>
#include <stdlib.h>

#fuses NOPUT      // ?
#fuses NOWRT      // ?
#fuses NODEBUG    // ?
#fuses NOBROWNOUT // Gerilim düþmesi anýnda bir resetleme istemiyorum
#fuses NOMCLR     // MCLR pininde voltaj düþümü olursa sýfýrlama istemiyorum.
#fuses NOPROTECT  // Kod korumasý istemiyorum
#fuses NOWDT      // Watch Dog Timer sýfýrlamasý istemiyorum
#fuses NOLVP      // Düþük voltaj programlamasý kullanmayacaðým
#fuses PLLEN      // PLL'i aktif ediyorum
#fuses INTRC_IO   // Harici olilator pinlerini Giriþ/Çýkýþ olarak kullanmak istiyorum
                  // Çünkü dahili osilator kullanacaðým
                
#use delay(internal=64000000)

#use fast_io(c)

#use rs232(baud=9600, parity=N, xmit=pin_c6, rcv=pin_c7, bits=8)


unsigned int16 firstValue = 0;
unsigned int16 colourSelect = 0;
unsigned int16 array[65] = {};
unsigned int16 indeks = 0;
unsigned int16 lastValue = 0;

#include "RGBKontrol.c"

#int_rda
void seriHaberlesmeKesmesi(){
   firstValue = getc();
   switch(firstValue)
   {
      case 200: colourSelect = RED;     break;
      case 201: colourSelect = GREEN;   break;
      case 202: colourSelect = BLUE;    break;
      case 203: colourSelect = YELLOW;  break;
      case 204: colourSelect = MAGENTA; break;
      case 205: colourSelect = CYAN;    break;
      case 206: colourSelect = WHITE;   break;
      case 207: colourSelect = BLACK;   break;
   }
   
   if(firstValue<=65 && colourSelect!=0)
   {
      indeks = firstValue;
      switch(colourSelect) 
      {
      case RED     : firstValue = firstValue;       break;
      case GREEN   : firstValue = firstValue + 64;  break;
      case BLUE    : firstValue = firstValue + 128; break;
      case YELLOW  : firstValue = firstValue + 192; break;
      case MAGENTA : firstValue = firstValue + 256; break;
      case CYAN    : firstValue = firstValue + 320; break;
      case WHITE   : firstValue = firstValue + 384; break;
      case BLACK   : firstValue = firstValue + 448; break;
      
      }
      array[indeks] = firstValue;
   }
   
}
void main(){
   setup_oscillator(OSC_64MHZ, OSC_PLL_ON);
   set_tris_c(0b10000000);
   output_a(0x00);
   output_b(0x00);
   output_c(0x00);
   output_d(0x00);
   output_e(0x00);
   
   enable_interrupts(GLOBAL);
   enable_interrupts(INT_RDA);
   
   while(true){
   
      for(int i=1;i<65;i++){
         
         lastValue = array[i];
         output_a(0x3f); output_b(0xff); output_c(0xfc); output_d(0x0f); output_e(0x03);
         
          redSelect();     
          greenSelect();   
          blueSelect();    
          yellowSelect();  
          magentaSelect(); 
          cyanSelect();    
          whiteSelect();   
          blackSelect();
      
      }
   
   
   
   
   }
}





















                  

