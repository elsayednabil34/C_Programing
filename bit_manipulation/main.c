#include <stdio.h>
#include <stdint.h>
#include "bit_manipulation.h"

#define bitset(byte,nbit)   ((byte) |=  (1<<(nbit)))
#define bitclear(byte,nbit) ((byte) &= ~(1<<(nbit)))
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

int main (void){

    uint32_t value = 0X01;  /* 0000 0001 */
    /*setting bit */
    value = set_bit (value , 0); 
    printf("value after setting = %x \n", value);
   


    /* clearing bit  */
    value = clear_bit(value , 0); 
    printf("value after clearing = %x \n", value);



    /* toggling bit  */
    value = toggle_bit (value,0);
    printf("value after toggling  = %x \n" , value );



    return 0;
}


