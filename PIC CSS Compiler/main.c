#include <16F1827.h>
#device ADC=16
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#use delay(crystal=4MHz)
#use standard_io(b) 
void main()
{
   set_tris_b(0b00000000);
   int numeros[10]={0x3F,0x6,0x5B,0x4F,0x66,0x6D,0x7D,0x7,0x7F,0x6F};
   int contar = 0;
   output_b(0x3F);
   while(TRUE)
   {
      if (contar<10){
         output_b(numeros[contar]);
         contar++;
         delay_ms(300);
      }
      else{
         contar=0;
      }
   }
}

