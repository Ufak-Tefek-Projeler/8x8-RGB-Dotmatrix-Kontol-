#include "RGBKontrol.h"

void redSelect(void){
   switch(lastValue)
   {     
         //sat1
         case   1: output_high(S1); output_low(R1); break;
         case   2: output_high(S1); output_low(R2); break;
         case   3: output_high(S1); output_low(R3); break;
         case   4: output_high(S1); output_low(R4); break;
         case   5: output_high(S1); output_low(R5); break;
         case   6: output_high(S1); output_low(R6); break;
         case   7: output_high(S1); output_low(R7); break;
         case   8: output_high(S1); output_low(R8); break;
         //sat2        
         case 9:  output_high(S2); output_low(R1); break;
         case 10: output_high(S2); output_low(R2); break;
         case 11: output_high(S2); output_low(R3); break;
         case 12: output_high(S2); output_low(R4); break;
         case 13: output_high(S2); output_low(R5); break;
         case 14: output_high(S2); output_low(R6); break;
         case 15: output_high(S2); output_low(R7); break;
         case 16: output_high(S2); output_low(R8); break;         
         //sat3
         case 17: output_high(S3); output_low(R1); break;
         case 18: output_high(S3); output_low(R2); break;
         case 19: output_high(S3); output_low(R3); break;
         case 20: output_high(S3); output_low(R4); break;
         case 21: output_high(S3); output_low(R5); break;
         case 22: output_high(S3); output_low(R6); break;
         case 23: output_high(S3); output_low(R7); break;
         case 24: output_high(S3); output_low(R8); break;         
         //sat4
         case 25: output_high(S4); output_low(R1); break;
         case 26: output_high(S4); output_low(R2); break;
         case 27: output_high(S4); output_low(R3); break;
         case 28: output_high(S4); output_low(R4); break;
         case 29: output_high(S4); output_low(R5); break;
         case 30: output_high(S4); output_low(R6); break;
         case 31: output_high(S4); output_low(R7); break;
         case 32: output_high(S4); output_low(R8); break;         
         //sat5
         case 33: output_high(S5); output_low(R1); break;
         case 34: output_high(S5); output_low(R2); break;
         case 35: output_high(S5); output_low(R3); break;
         case 36: output_high(S5); output_low(R4); break;
         case 37: output_high(S5); output_low(R5); break;
         case 38: output_high(S5); output_low(R6); break;
         case 39: output_high(S5); output_low(R7); break;
         case 40: output_high(S5); output_low(R8); break;
         //sat6
         case 41: output_high(S6); output_low(R1); break;
         case 42: output_high(S6); output_low(R2); break;
         case 43: output_high(S6); output_low(R3); break;
         case 44: output_high(S6); output_low(R4); break;
         case 45: output_high(S6); output_low(R5); break;
         case 46: output_high(S6); output_low(R6); break;
         case 47: output_high(S6); output_low(R7); break;
         case 48: output_high(S6); output_low(R8); break;
         //sat7
         case 49: output_high(S7); output_low(R1); break;
         case 50: output_high(S7); output_low(R2); break;
         case 51: output_high(S7); output_low(R3); break;
         case 52: output_high(S7); output_low(R4); break;
         case 53: output_high(S7); output_low(R5); break;
         case 54: output_high(S7); output_low(R6); break;
         case 55: output_high(S7); output_low(R7); break;
         case 56: output_high(S7); output_low(R8); break;  
         //sat8
         case 57: output_high(S8); output_low(R1); break;
         case 58: output_high(S8); output_low(R2); break;
         case 59: output_high(S8); output_low(R3); break;
         case 60: output_high(S8); output_low(R4); break;
         case 61: output_high(S8); output_low(R5); break;
         case 62: output_high(S8); output_low(R6); break;
         case 63: output_high(S8); output_low(R7); break;
         case 64: output_high(S8); output_low(R8); break; 
   }
}
void greenSelect(void){
   switch(lastValue)
   {
//sat1
         case 65: output_high(S1); output_low(G1); break;
         case 66: output_high(S1); output_low(G2); break;
         case 67: output_high(S1); output_low(G3); break;
         case 68: output_high(S1); output_low(G4); break;
         case 69: output_high(S1); output_low(G5); break;
         case 70: output_high(S1); output_low(G6); break;
         case 71: output_high(S1); output_low(G7); break;
         case 72: output_high(S1); output_low(G8); break;
         //sat2        
         case 73: output_high(S2); output_low(G1); break;
         case 74: output_high(S2); output_low(G2); break;
         case 75: output_high(S2); output_low(G3); break;
         case 76: output_high(S2); output_low(G4); break;
         case 77: output_high(S2); output_low(G5); break;
         case 78: output_high(S2); output_low(G6); break;
         case 79: output_high(S2); output_low(G7); break;
         case 80: output_high(S2); output_low(G8); break;         
         //sat3
         case 81: output_high(S3); output_low(G1); break;
         case 82: output_high(S3); output_low(G2); break;
         case 83: output_high(S3); output_low(G3); break;
         case 84: output_high(S3); output_low(G4); break;
         case 85: output_high(S3); output_low(G5); break;
         case 86: output_high(S3); output_low(G6); break;
         case 87: output_high(S3); output_low(G7); break;
         case 88: output_high(S3); output_low(G8); break;         
         //sat4
         case 89: output_high(S4); output_low(G1); break;
         case 90: output_high(S4); output_low(G2); break;
         case 91: output_high(S4); output_low(G3); break;
         case 92: output_high(S4); output_low(G4); break;
         case 93: output_high(S4); output_low(G5); break;
         case 94: output_high(S4); output_low(G6); break;
         case 95: output_high(S4); output_low(G7); break;
         case 96: output_high(S4); output_low(G8); break;         
         //sat5
         case 97:  output_high(S5); output_low(G1); break;
         case 98:  output_high(S5); output_low(G2); break;
         case 99:  output_high(S5); output_low(G3); break;
         case 100: output_high(S5); output_low(G4); break;
         case 101: output_high(S5); output_low(G5); break;
         case 102: output_high(S5); output_low(G6); break;
         case 103: output_high(S5); output_low(G7); break;
         case 104: output_high(S5); output_low(G8); break;
         //sat6
         case 105: output_high(S6); output_low(G1); break;
         case 106: output_high(S6); output_low(G2); break;
         case 107: output_high(S6); output_low(G3); break;
         case 108: output_high(S6); output_low(G4); break;
         case 109: output_high(S6); output_low(G5); break;
         case 110: output_high(S6); output_low(G6); break;
         case 111: output_high(S6); output_low(G7); break;
         case 112: output_high(S6); output_low(G8); break;
         //sat7
         case 113: output_high(S7); output_low(G1); break;
         case 114: output_high(S7); output_low(G2); break;
         case 115: output_high(S7); output_low(G3); break;
         case 116: output_high(S7); output_low(G4); break;
         case 117: output_high(S7); output_low(G5); break;
         case 118: output_high(S7); output_low(G6); break;
         case 119: output_high(S7); output_low(G7); break;
         case 120: output_high(S7); output_low(G8); break;  
         //sat8
         case 121: output_high(S8); output_low(G1); break;
         case 122: output_high(S8); output_low(G2); break;
         case 123: output_high(S8); output_low(G3); break;
         case 124: output_high(S8); output_low(G4); break;
         case 125: output_high(S8); output_low(G5); break;
         case 126: output_high(S8); output_low(G6); break;
         case 127: output_high(S8); output_low(G7); break;
         case 128: output_high(S8); output_low(G8); break;    
   }
}
void blueSelect(void){            
   switch(lastValue)
   {                   
         //sat1
         case 129: output_high(S1); output_low(B1); break;
         case 130: output_high(S1); output_low(B2); break;
         case 131: output_high(S1); output_low(B3); break;
         case 132: output_high(S1); output_low(B4); break;
         case 133: output_high(S1); output_low(B5); break;
         case 134: output_high(S1); output_low(B6); break;
         case 135: output_high(S1); output_low(B7); break;
         case 136: output_high(S1); output_low(B8); break;
         //sat2        
         case 137: output_high(S2); output_low(B1); break;
         case 138: output_high(S2); output_low(B2); break;
         case 139: output_high(S2); output_low(B3); break;
         case 140: output_high(S2); output_low(B4); break;
         case 141: output_high(S2); output_low(B5); break;
         case 142: output_high(S2); output_low(B6); break;
         case 143: output_high(S2); output_low(B7); break;
         case 144: output_high(S2); output_low(B8); break;         
         //sat3
         case 145: output_high(S3); output_low(B1); break;
         case 146: output_high(S3); output_low(B2); break;
         case 147: output_high(S3); output_low(B3); break;
         case 148: output_high(S3); output_low(B4); break;
         case 149: output_high(S3); output_low(B5); break;
         case 150: output_high(S3); output_low(B6); break;
         case 151: output_high(S3); output_low(B7); break;
         case 152: output_high(S3); output_low(B8); break;         
         //sat4
         case 153: output_high(S4); output_low(B1); break;
         case 154: output_high(S4); output_low(B2); break;
         case 155: output_high(S4); output_low(B3); break;
         case 156: output_high(S4); output_low(B4); break;
         case 157: output_high(S4); output_low(B5); break;
         case 158: output_high(S4); output_low(B6); break;
         case 159: output_high(S4); output_low(B7); break;
         case 160: output_high(S4); output_low(B8); break;         
         //satS
         case 161: output_high(S5); output_low(B1); break;
         case 162: output_high(S5); output_low(B2); break;
         case 163: output_high(S5); output_low(B3); break;
         case 164: output_high(S5); output_low(B4); break;
         case 165: output_high(S5); output_low(B5); break;
         case 166: output_high(S5); output_low(B6); break;
         case 167: output_high(S5); output_low(B7); break;
         case 168: output_high(S5); output_low(B8); break;
         //sat6
         case 169: output_high(S6); output_low(B1); break;
         case 170: output_high(S6); output_low(B2); break;
         case 171: output_high(S6); output_low(B3); break;
         case 172: output_high(S6); output_low(B4); break;
         case 173: output_high(S6); output_low(B5); break;
         case 174: output_high(S6); output_low(B6); break;
         case 175: output_high(S6); output_low(B7); break;
         case 176: output_high(S6); output_low(B8); break;
         //sat7
         case 177: output_high(S7); output_low(B1); break;
         case 178: output_high(S7); output_low(B2); break;
         case 179: output_high(S7); output_low(B3); break;
         case 180: output_high(S7); output_low(B4); break;
         case 181: output_high(S7); output_low(B5); break;
         case 182: output_high(S7); output_low(B6); break;
         case 183: output_high(S7); output_low(B7); break;
         case 184: output_high(S7); output_low(B8); break;  
         //sat8
         case 185: output_high(S8); output_low(B1); break;
         case 186: output_high(S8); output_low(B2); break;
         case 187: output_high(S8); output_low(B3); break;
         case 188: output_high(S8); output_low(B4); break;
         case 189: output_high(S8); output_low(B5); break;
         case 190: output_high(S8); output_low(B6); break;
         case 191: output_high(S8); output_low(B7); break;
         case 192: output_high(S8); output_low(B8); break; 
   }
}
void yellowSelect(void){            
   switch(lastValue)
   {     
         // ROW1 Satir1 
         case 193: output_high(S1); output_low(R1); output_low(G1); break;
         case 194: output_high(S1); output_low(R2); output_low(G2); break;
         case 195: output_high(S1); output_low(R3); output_low(G3); break;
         case 196: output_high(S1); output_low(R4); output_low(G4); break;
         case 197: output_high(S1); output_low(R5); output_low(G5); break;
         case 198: output_high(S1); output_low(R6); output_low(G6); break;
         case 199: output_high(S1); output_low(R7); output_low(G7); break;
         case 200: output_high(S1); output_low(R8); output_low(G8); break;    
         // ROW2 Satir2 
         case 201: output_high(S2); output_low(R1); output_low(G1); break;
         case 202: output_high(S2); output_low(R2); output_low(G2); break;
         case 203: output_high(S2); output_low(R3); output_low(G3); break;
         case 204: output_high(S2); output_low(R4); output_low(G4); break;
         case 205: output_high(S2); output_low(R5); output_low(G5); break;
         case 206: output_high(S2); output_low(R6); output_low(G6); break;
         case 207: output_high(S2); output_low(R7); output_low(G7); break;
         case 208: output_high(S2); output_low(R8); output_low(G8); break;
         // ROW3 Satir3 
         case 209: output_high(S3); output_low(R1); output_low(G1); break;
         case 210: output_high(S3); output_low(R2); output_low(G2); break;
         case 211: output_high(S3); output_low(R3); output_low(G3); break;
         case 212: output_high(S3); output_low(R4); output_low(G4); break;
         case 213: output_high(S3); output_low(R5); output_low(G5); break;
         case 214: output_high(S3); output_low(R6); output_low(G6); break;
         case 215: output_high(S3); output_low(R7); output_low(G7); break;
         case 216: output_high(S3); output_low(R8); output_low(G8); break;
         // ROW4 Satir4
         case 217: output_high(S4); output_low(R1); output_low(G1); break;
         case 218: output_high(S4); output_low(R2); output_low(G2); break;
         case 219: output_high(S4); output_low(R3); output_low(G3); break;
         case 220: output_high(S4); output_low(R4); output_low(G4); break;
         case 221: output_high(S4); output_low(R5); output_low(G5); break;
         case 222: output_high(S4); output_low(R6); output_low(G6); break;
         case 223: output_high(S4); output_low(R7); output_low(G7); break;
         case 224: output_high(S4); output_low(R8); output_low(G8); break;
         // ROW5 Satir5
         case 225: output_high(S5); output_low(R1); output_low(G1); break;
         case 226: output_high(S5); output_low(R2); output_low(G2); break;
         case 227: output_high(S5); output_low(R3); output_low(G3); break;
         case 228: output_high(S5); output_low(R4); output_low(G4); break;
         case 229: output_high(S5); output_low(R5); output_low(G5); break;
         case 230: output_high(S5); output_low(R6); output_low(G6); break;
         case 231: output_high(S5); output_low(R7); output_low(G7); break;
         case 232: output_high(S5); output_low(R8); output_low(G8); break;
         // ROW6 Satir6
         case 233: output_high(S6); output_low(R1); output_low(G1); break;
         case 234: output_high(S6); output_low(R2); output_low(G2); break;
         case 235: output_high(S6); output_low(R3); output_low(G3); break;
         case 236: output_high(S6); output_low(R4); output_low(G4); break;
         case 237: output_high(S6); output_low(R5); output_low(G5); break;
         case 238: output_high(S6); output_low(R6); output_low(G6); break;
         case 239: output_high(S6); output_low(R7); output_low(G7); break;
         case 240: output_high(S6); output_low(R8); output_low(G8); break;
         // ROW7 Satir7
         case 241: output_high(S7); output_low(R1); output_low(G1); break;
         case 242: output_high(S7); output_low(R2); output_low(G2); break;
         case 243: output_high(S7); output_low(R3); output_low(G3); break;
         case 244: output_high(S7); output_low(R4); output_low(G4); break;
         case 245: output_high(S7); output_low(R5); output_low(G5); break;
         case 246: output_high(S7); output_low(R6); output_low(G6); break;
         case 247: output_high(S7); output_low(R7); output_low(G7); break;
         case 248: output_high(S7); output_low(R8); output_low(G8); break;
         // ROW8 Satir8
         case 249: output_high(S8); output_low(R1); output_low(G1); break;
         case 250: output_high(S8); output_low(R2); output_low(G2); break;
         case 251: output_high(S8); output_low(R3); output_low(G3); break;
         case 252: output_high(S8); output_low(R4); output_low(G4); break;
         case 253: output_high(S8); output_low(R5); output_low(G5); break;
         case 254: output_high(S8); output_low(R6); output_low(G6); break;
         case 255: output_high(S8); output_low(R7); output_low(G7); break;
         case 256: output_high(S8); output_low(R8); output_low(G8); break;
   }
}
void magentaSelect(void){            
   switch(lastValue)
   {     
         // ROW1 Satir1 
         case 257: output_high(S1); output_low(R1); output_low(B1); break;
         case 258: output_high(S1); output_low(R2); output_low(B2); break;
         case 259: output_high(S1); output_low(R3); output_low(B3); break;
         case 260: output_high(S1); output_low(R4); output_low(B4); break;
         case 261: output_high(S1); output_low(R5); output_low(B5); break;
         case 262: output_high(S1); output_low(R6); output_low(B6); break;
         case 263: output_high(S1); output_low(R7); output_low(B7); break;
         case 264: output_high(S1); output_low(R8); output_low(B8); break;    
         // ROW2 Satir2                                        
         case 265: output_high(S2); output_low(R1); output_low(B1); break;
         case 266: output_high(S2); output_low(R2); output_low(B2); break;
         case 267: output_high(S2); output_low(R3); output_low(B3); break;
         case 268: output_high(S2); output_low(R4); output_low(B4); break;
         case 269: output_high(S2); output_low(R5); output_low(B5); break;
         case 270: output_high(S2); output_low(R6); output_low(B6); break;
         case 271: output_high(S2); output_low(R7); output_low(B7); break;
         case 272: output_high(S2); output_low(R8); output_low(B8); break;
         // ROW3 Satir3                                        
         case 273: output_high(S3); output_low(R1); output_low(B1); break;
         case 274: output_high(S3); output_low(R2); output_low(B2); break;
         case 275: output_high(S3); output_low(R3); output_low(B3); break;
         case 276: output_high(S3); output_low(R4); output_low(B4); break;
         case 277: output_high(S3); output_low(R5); output_low(B5); break;
         case 278: output_high(S3); output_low(R6); output_low(B6); break;
         case 279: output_high(S3); output_low(R7); output_low(B7); break;
         case 280: output_high(S3); output_low(R8); output_low(B8); break;
         // ROW4 Satir4                                        
         case 281: output_high(S4); output_low(R1); output_low(B1); break;
         case 282: output_high(S4); output_low(R2); output_low(B2); break;
         case 283: output_high(S4); output_low(R3); output_low(B3); break;
         case 284: output_high(S4); output_low(R4); output_low(B4); break;
         case 285: output_high(S4); output_low(R5); output_low(B5); break;
         case 286: output_high(S4); output_low(R6); output_low(B6); break;
         case 287: output_high(S4); output_low(R7); output_low(B7); break;
         case 288: output_high(S4); output_low(R8); output_low(B8); break;
         // ROW5 Satir5                                        
         case 289: output_high(S5); output_low(R1); output_low(B1); break;
         case 290: output_high(S5); output_low(R2); output_low(B2); break;
         case 291: output_high(S5); output_low(R3); output_low(B3); break;
         case 292: output_high(S5); output_low(R4); output_low(B4); break;
         case 293: output_high(S5); output_low(R5); output_low(B5); break;
         case 294: output_high(S5); output_low(R6); output_low(B6); break;
         case 295: output_high(S5); output_low(R7); output_low(B7); break;
         case 296: output_high(S5); output_low(R8); output_low(B8); break;
         // ROW6 Satir6                                        
         case 297: output_high(S6); output_low(R1); output_low(B1); break;
         case 298: output_high(S6); output_low(R2); output_low(B2); break;
         case 299: output_high(S6); output_low(R3); output_low(B3); break;
         case 300: output_high(S6); output_low(R4); output_low(B4); break;
         case 301: output_high(S6); output_low(R5); output_low(B5); break;
         case 302: output_high(S6); output_low(R6); output_low(B6); break;
         case 303: output_high(S6); output_low(R7); output_low(B7); break;
         case 304: output_high(S6); output_low(R8); output_low(B8); break;
         // ROW7 Satir7                                        
         case 305: output_high(S7); output_low(R1); output_low(B1); break;
         case 306: output_high(S7); output_low(R2); output_low(B2); break;
         case 307: output_high(S7); output_low(R3); output_low(B3); break;
         case 308: output_high(S7); output_low(R4); output_low(B4); break;
         case 309: output_high(S7); output_low(R5); output_low(B5); break;
         case 310: output_high(S7); output_low(R6); output_low(B6); break;
         case 311: output_high(S7); output_low(R7); output_low(B7); break;
         case 312: output_high(S7); output_low(R8); output_low(B8); break;
         // ROW8 Satir8                                        
         case 313: output_high(S8); output_low(R1); output_low(B1); break;
         case 314: output_high(S8); output_low(R2); output_low(B2); break;
         case 315: output_high(S8); output_low(R3); output_low(B3); break;
         case 316: output_high(S8); output_low(R4); output_low(B4); break;
         case 317: output_high(S8); output_low(R5); output_low(B5); break;
         case 318: output_high(S8); output_low(R6); output_low(B6); break;
         case 319: output_high(S8); output_low(R7); output_low(B7); break;
         case 320: output_high(S8); output_low(R8); output_low(B8); break;
   }
}   
void cyanSelect(void){            
   switch(lastValue)
   {     
         // ROW1 Satir1 
         case 321: output_high(S1); output_low(G1); output_low(B1); break;
         case 322: output_high(S1); output_low(G2); output_low(B2); break;
         case 323: output_high(S1); output_low(G3); output_low(B3); break;
         case 324: output_high(S1); output_low(G4); output_low(B4); break;
         case 325: output_high(S1); output_low(G5); output_low(B5); break;
         case 326: output_high(S1); output_low(G6); output_low(B6); break;
         case 327: output_high(S1); output_low(G7); output_low(B7); break;
         case 328: output_high(S1); output_low(G8); output_low(B8); break;    
         // ROW2 Satir2                                       
         case 329: output_high(S2); output_low(G1); output_low(B1); break;
         case 330: output_high(S2); output_low(G2); output_low(B2); break;
         case 331: output_high(S2); output_low(G3); output_low(B3); break;
         case 332: output_high(S2); output_low(G4); output_low(B4); break;
         case 333: output_high(S2); output_low(G5); output_low(B5); break;
         case 334: output_high(S2); output_low(G6); output_low(B6); break;
         case 335: output_high(S2); output_low(G7); output_low(B7); break;
         case 336: output_high(S2); output_low(G8); output_low(B8); break;
         // ROW3 Satir3                                       
         case 337: output_high(S3); output_low(G1); output_low(B1); break;
         case 338: output_high(S3); output_low(G2); output_low(B2); break;
         case 339: output_high(S3); output_low(G3); output_low(B3); break;
         case 340: output_high(S3); output_low(G4); output_low(B4); break;
         case 341: output_high(S3); output_low(G5); output_low(B5); break;
         case 342: output_high(S3); output_low(G6); output_low(B6); break;
         case 343: output_high(S3); output_low(G7); output_low(B7); break;
         case 344: output_high(S3); output_low(G8); output_low(B8); break;
         // ROW4 Satir4                                       
         case 345: output_high(S4); output_low(G1); output_low(B1); break;
         case 346: output_high(S4); output_low(G2); output_low(B2); break;
         case 347: output_high(S4); output_low(G3); output_low(B3); break;
         case 348: output_high(S4); output_low(G4); output_low(B4); break;
         case 349: output_high(S4); output_low(G5); output_low(B5); break;
         case 350: output_high(S4); output_low(G6); output_low(B6); break;
         case 351: output_high(S4); output_low(G7); output_low(B7); break;
         case 352: output_high(S4); output_low(G8); output_low(B8); break;
         // ROW5 Satir5                                       
         case 353: output_high(S5); output_low(G1); output_low(B1); break;
         case 354: output_high(S5); output_low(G2); output_low(B2); break;
         case 355: output_high(S5); output_low(G3); output_low(B3); break;
         case 356: output_high(S5); output_low(G4); output_low(B4); break;
         case 357: output_high(S5); output_low(G5); output_low(B5); break;
         case 358: output_high(S5); output_low(G6); output_low(B6); break;
         case 359: output_high(S5); output_low(G7); output_low(B7); break;
         case 360: output_high(S5); output_low(G8); output_low(B8); break;
         // ROW6 Satir6                                      
         case 361: output_high(S6); output_low(G1); output_low(B1); break;
         case 362: output_high(S6); output_low(G2); output_low(B2); break;
         case 363: output_high(S6); output_low(G3); output_low(B3); break;
         case 364: output_high(S6); output_low(G4); output_low(B4); break;
         case 365: output_high(S6); output_low(G5); output_low(B5); break;
         case 366: output_high(S6); output_low(G6); output_low(B6); break;
         case 367: output_high(S6); output_low(G7); output_low(B7); break;
         case 368: output_high(S6); output_low(G8); output_low(B8); break;
         // ROW7 Satir7                                       
         case 369: output_high(S7); output_low(G1); output_low(B1); break;
         case 370: output_high(S7); output_low(G2); output_low(B2); break;
         case 371: output_high(S7); output_low(G3); output_low(B3); break;
         case 372: output_high(S7); output_low(G4); output_low(B4); break;
         case 373: output_high(S7); output_low(G5); output_low(B5); break;
         case 374: output_high(S7); output_low(G6); output_low(B6); break;
         case 375: output_high(S7); output_low(G7); output_low(B7); break;
         case 376: output_high(S7); output_low(G8); output_low(B8); break;
         // ROW8 Satir8                                       
         case 377: output_high(S8); output_low(G1); output_low(B1); break;
         case 378: output_high(S8); output_low(G2); output_low(B2); break;
         case 379: output_high(S8); output_low(G3); output_low(B3); break;
         case 380: output_high(S8); output_low(G4); output_low(B4); break;
         case 381: output_high(S8); output_low(G5); output_low(B5); break;
         case 382: output_high(S8); output_low(G6); output_low(B6); break;
         case 383: output_high(S8); output_low(G7); output_low(B7); break;
         case 384: output_high(S8); output_low(G8); output_low(B8); break;
   }
}  
void whiteSelect(void){            
   switch(lastValue)
   {     
         // ROW1 Satir1 
         case 385: output_high(S1); output_low(R1); output_low(G1); output_low(B1); break;
         case 386: output_high(S1); output_low(R2); output_low(G2); output_low(B2); break;
         case 387: output_high(S1); output_low(R3); output_low(G3); output_low(B3); break;
         case 388: output_high(S1); output_low(R4); output_low(G4); output_low(B4); break;
         case 389: output_high(S1); output_low(R5); output_low(G5); output_low(B5); break;
         case 390: output_high(S1); output_low(R6); output_low(G6); output_low(B6); break;
         case 391: output_high(S1); output_low(R7); output_low(G7); output_low(B7); break;
         case 392: output_high(S1); output_low(R8); output_low(G8); output_low(B8); break;    
         // ROW2 Satir2                                       
         case 393: output_high(S2); output_low(R1); output_low(G1); output_low(B1); break;
         case 394: output_high(S2); output_low(R2); output_low(G2); output_low(B2); break;
         case 395: output_high(S2); output_low(R3); output_low(G3); output_low(B3); break;
         case 396: output_high(S2); output_low(R4); output_low(G4); output_low(B4); break;
         case 397: output_high(S2); output_low(R5); output_low(G5); output_low(B5); break;
         case 398: output_high(S2); output_low(R6); output_low(G6); output_low(B6); break;
         case 399: output_high(S2); output_low(R7); output_low(G7); output_low(B7); break;
         case 400: output_high(S2); output_low(R8); output_low(G8); output_low(B8); break;
         // ROW3 Satir3                                       
         case 401: output_high(S3); output_low(R1); output_low(G1); output_low(B1); break;
         case 402: output_high(S3); output_low(R2); output_low(G2); output_low(B2); break;
         case 403: output_high(S3); output_low(R3); output_low(G3); output_low(B3); break;
         case 404: output_high(S3); output_low(R4); output_low(G4); output_low(B4); break;
         case 405: output_high(S3); output_low(R5); output_low(G5); output_low(B5); break;
         case 406: output_high(S3); output_low(R6); output_low(G6); output_low(B6); break;
         case 407: output_high(S3); output_low(R7); output_low(G7); output_low(B7); break;
         case 408: output_high(S3); output_low(R8); output_low(G8); output_low(B8); break;
         // ROW4 Satir4                                       
         case 409: output_high(S4); output_low(R1); output_low(G1); output_low(B1); break;
         case 410: output_high(S4); output_low(R2); output_low(G2); output_low(B2); break;
         case 411: output_high(S4); output_low(R3); output_low(G3); output_low(B3); break;
         case 412: output_high(S4); output_low(R4); output_low(G4); output_low(B4); break;
         case 413: output_high(S4); output_low(R5); output_low(G5); output_low(B5); break;
         case 414: output_high(S4); output_low(R6); output_low(G6); output_low(B6); break;
         case 415: output_high(S4); output_low(R7); output_low(G7); output_low(B7); break;
         case 416: output_high(S4); output_low(R8); output_low(G8); output_low(B8); break;
         // ROW5 Satir5                                       
         case 417: output_high(S5); output_low(R1); output_low(G1); output_low(B1); break;
         case 418: output_high(S5); output_low(R2); output_low(G2); output_low(B2); break;
         case 419: output_high(S5); output_low(R3); output_low(G3); output_low(B3); break;
         case 420: output_high(S5); output_low(R4); output_low(G4); output_low(B4); break;
         case 421: output_high(S5); output_low(R5); output_low(G5); output_low(B5); break;
         case 422: output_high(S5); output_low(R6); output_low(G6); output_low(B6); break;
         case 423: output_high(S5); output_low(R7); output_low(G7); output_low(B7); break;
         case 424: output_high(S5); output_low(R8); output_low(G8); output_low(B8); break;
         // ROW6 Satir6                                       
         case 425: output_high(S6); output_low(R1); output_low(G1); output_low(B1); break;
         case 426: output_high(S6); output_low(R2); output_low(G2); output_low(B2); break;
         case 427: output_high(S6); output_low(R3); output_low(G3); output_low(B3); break;
         case 428: output_high(S6); output_low(R4); output_low(G4); output_low(B4); break;
         case 429: output_high(S6); output_low(R5); output_low(G5); output_low(B5); break;
         case 430: output_high(S6); output_low(R6); output_low(G6); output_low(B6); break;
         case 431: output_high(S6); output_low(R7); output_low(G7); output_low(B7); break;
         case 432: output_high(S6); output_low(R8); output_low(G8); output_low(B8); break;
         // ROW7 Satir7                                       
         case 433: output_high(S7); output_low(R1); output_low(G1); output_low(B1); break;
         case 434: output_high(S7); output_low(R2); output_low(G2); output_low(B2); break;
         case 435: output_high(S7); output_low(R3); output_low(G3); output_low(B3); break;
         case 436: output_high(S7); output_low(R4); output_low(G4); output_low(B4); break;
         case 437: output_high(S7); output_low(R5); output_low(G5); output_low(B5); break;
         case 438: output_high(S7); output_low(R6); output_low(G6); output_low(B6); break;
         case 439: output_high(S7); output_low(R7); output_low(G7); output_low(B7); break;
         case 440: output_high(S7); output_low(R8); output_low(G8); output_low(B8); break;
         // ROW8 Satir8                                       
         case 441: output_high(S8); output_low(R1); output_low(G1); output_low(B1); break;
         case 442: output_high(S8); output_low(R2); output_low(G2); output_low(B2); break;
         case 443: output_high(S8); output_low(R3); output_low(G3); output_low(B3); break;
         case 444: output_high(S8); output_low(R4); output_low(G4); output_low(B4); break;
         case 445: output_high(S8); output_low(R5); output_low(G5); output_low(B5); break;
         case 446: output_high(S8); output_low(R6); output_low(G6); output_low(B6); break;
         case 447: output_high(S8); output_low(R7); output_low(G7); output_low(B7); break;
         case 448: output_high(S8); output_low(R8); output_low(G8); output_low(B8); break;
   }
} 
void blackSelect(void){            
   switch(lastValue)
   {     
         // ROW1 Satir1 
         case 449: output_high(S1); output_high(R1); output_high(G1); output_high(B1); break;
         case 450: output_high(S1); output_high(R2); output_high(G2); output_high(B2); break;
         case 451: output_high(S1); output_high(R3); output_high(G3); output_high(B3); break;
         case 452: output_high(S1); output_high(R4); output_high(G4); output_high(B4); break;
         case 453: output_high(S1); output_high(R5); output_high(G5); output_high(B5); break;
         case 454: output_high(S1); output_high(R6); output_high(G6); output_high(B6); break;
         case 455: output_high(S1); output_high(R7); output_high(G7); output_high(B7); break;
         case 456: output_high(S1); output_high(R8); output_high(G8); output_high(B8); break;    
         // ROW2 Satir2                                                      
         case 457: output_high(S2); output_high(R1); output_high(G1); output_high(B1); break;
         case 458: output_high(S2); output_high(R2); output_high(G2); output_high(B2); break;
         case 459: output_high(S2); output_high(R3); output_high(G3); output_high(B3); break;
         case 460: output_high(S2); output_high(R4); output_high(G4); output_high(B4); break;
         case 461: output_high(S2); output_high(R5); output_high(G5); output_high(B5); break;
         case 462: output_high(S2); output_high(R6); output_high(G6); output_high(B6); break;
         case 463: output_high(S2); output_high(R7); output_high(G7); output_high(B7); break;
         case 464: output_high(S2); output_high(R8); output_high(G8); output_high(B8); break;
         // ROW3 Satir3                                                      
         case 465: output_high(S3); output_high(R1); output_high(G1); output_high(B1); break;
         case 466: output_high(S3); output_high(R2); output_high(G2); output_high(B2); break;
         case 467: output_high(S3); output_high(R3); output_high(G3); output_high(B3); break;
         case 468: output_high(S3); output_high(R4); output_high(G4); output_high(B4); break;
         case 469: output_high(S3); output_high(R5); output_high(G5); output_high(B5); break;
         case 470: output_high(S3); output_high(R6); output_high(G6); output_high(B6); break;
         case 471: output_high(S3); output_high(R7); output_high(G7); output_high(B7); break;
         case 472: output_high(S3); output_high(R8); output_high(G8); output_high(B8); break;
         // ROW4 Satir4                                                      
         case 473: output_high(S4); output_high(R1); output_high(G1); output_high(B1); break;
         case 474: output_high(S4); output_high(R2); output_high(G2); output_high(B2); break;
         case 475: output_high(S4); output_high(R3); output_high(G3); output_high(B3); break;
         case 476: output_high(S4); output_high(R4); output_high(G4); output_high(B4); break;
         case 477: output_high(S4); output_high(R5); output_high(G5); output_high(B5); break;
         case 478: output_high(S4); output_high(R6); output_high(G6); output_high(B6); break;
         case 479: output_high(S4); output_high(R7); output_high(G7); output_high(B7); break;
         case 480: output_high(S4); output_high(R8); output_high(G8); output_high(B8); break;
         // ROW5 Satir5                                                      
         case 481: output_high(S5); output_high(R1); output_high(G1); output_high(B1); break;
         case 482: output_high(S5); output_high(R2); output_high(G2); output_high(B2); break;
         case 483: output_high(S5); output_high(R3); output_high(G3); output_high(B3); break;
         case 484: output_high(S5); output_high(R4); output_high(G4); output_high(B4); break;
         case 485: output_high(S5); output_high(R5); output_high(G5); output_high(B5); break;
         case 486: output_high(S5); output_high(R6); output_high(G6); output_high(B6); break;
         case 487: output_high(S5); output_high(R7); output_high(G7); output_high(B7); break;
         case 488: output_high(S5); output_high(R8); output_high(G8); output_high(B8); break;
         // ROW6 Satir6                                                      
         case 489: output_high(S6); output_high(R1); output_high(G1); output_high(B1); break;
         case 490: output_high(S6); output_high(R2); output_high(G2); output_high(B2); break;
         case 491: output_high(S6); output_high(R3); output_high(G3); output_high(B3); break;
         case 492: output_high(S6); output_high(R4); output_high(G4); output_high(B4); break;
         case 493: output_high(S6); output_high(R5); output_high(G5); output_high(B5); break;
         case 494: output_high(S6); output_high(R6); output_high(G6); output_high(B6); break;
         case 495: output_high(S6); output_high(R7); output_high(G7); output_high(B7); break;
         case 496: output_high(S6); output_high(R8); output_high(G8); output_high(B8); break;
         // ROW7 Satir7                                                      
         case 497: output_high(S7); output_high(R1); output_high(G1); output_high(B1); break;
         case 498: output_high(S7); output_high(R2); output_high(G2); output_high(B2); break;
         case 499: output_high(S7); output_high(R3); output_high(G3); output_high(B3); break;
         case 500: output_high(S7); output_high(R4); output_high(G4); output_high(B4); break;
         case 501: output_high(S7); output_high(R5); output_high(G5); output_high(B5); break;
         case 502: output_high(S7); output_high(R6); output_high(G6); output_high(B6); break;
         case 503: output_high(S7); output_high(R7); output_high(G7); output_high(B7); break;
         case 504: output_high(S7); output_high(R8); output_high(G8); output_high(B8); break;
         // ROW8 Satir8                                                      
         case 505: output_high(S8); output_high(R1); output_high(G1); output_high(B1); break;
         case 506: output_high(S8); output_high(R2); output_high(G2); output_high(B2); break;
         case 507: output_high(S8); output_high(R3); output_high(G3); output_high(B3); break;
         case 508: output_high(S8); output_high(R4); output_high(G4); output_high(B4); break;
         case 509: output_high(S8); output_high(R5); output_high(G5); output_high(B5); break;
         case 510: output_high(S8); output_high(R6); output_high(G6); output_high(B6); break;
         case 511: output_high(S8); output_high(R7); output_high(G7); output_high(B7); break;
         case 512: output_high(S8); output_high(R8); output_high(G8); output_high(B8); break;
   }
} 
