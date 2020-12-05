//ROW [Satýr] select +5V

#define S1 pin_d7
#define S2 pin_d6
#define S3 pin_d5
#define S4 pin_d4
#define S5 pin_c1
#define S6 pin_c0
#define S7 pin_a6
#define S8 pin_a7

//RED [Kirmizi] Colour Select

#define R1 pin_b7
#define R2 pin_b6
#define R3 pin_b5
#define R4 pin_b4
#define R5 pin_b3
#define R6 pin_b2
#define R7 pin_b1
#define R8 pin_b0

//GREEN [Yesil] Colour Select

#define G1 pin_c2
#define G2 pin_c3
#define G3 pin_d0
#define G4 pin_d1
#define G5 pin_d2
#define G6 pin_d3
#define G7 pin_c4
#define G8 pin_c5

//BLUE [Mavi] Colour Select

#define B1 pin_e1
#define B2 pin_e0
#define B3 pin_a5
#define B4 pin_a4
#define B5 pin_a3
#define B6 pin_a2
#define B7 pin_a1
#define B8 pin_a0

#define RED     1 // KIRMIZI
#define GREEN   2 // YESIL
#define BLUE    3 // MAVI 
#define YELLOW  4 // SARI
#define MAGENTA 5 // MOR
#define CYAN    6 // CAMGOBEGI
#define WHITE   7 // BEYAZ
#define BLACK   8 // SIYAH

void redSelect(void);     //kirmizi renk seçim fonksiyonu
void greenSelect(void);   //yesil renk seçim fonksiyonu
void blueSelect(void);    //mavi renk seçim fonksiyonu
void yellowSelect(void);  //sari renk seçim fonksiyonu
void magentaSelect(void); //mor renk seçim fonksiyonu
void cyanSelect(void);    //camgobegi renk seçim fonksiyonu
void whiteSelect(void);   //beyaz renk seçim fonksiyonu
void blackSelect(void);   //siyah renk seçim fonksiyonu


