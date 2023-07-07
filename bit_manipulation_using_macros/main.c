#include <stdio.h>
#include "bit_manipulation.h"

int main (void)
{
    int value = 0x01;

    /* setting bit */
    set_bit(value,2);    
    printf("Value after setting = %x \n", value); //5

    /* clearing bit */
    clear_bit(value,2);  
    printf("Value after clearing  = %x \n", value); //1

    /* toggling  bit */
    toggle_bit(value,2);   
    printf("Value after toggle = %x \n", value); //5


    return 0;
}