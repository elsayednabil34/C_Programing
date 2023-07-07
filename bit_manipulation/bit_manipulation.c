#include "bit_manipulation.h"

int set_bit (int number , int bit){
    number  = number  | (1 << bit) ;
    return number ;
}

int clear_bit (int number , int bit){
    number = number & ~ (1 << bit) ; 

    return number;
}

int toggle_bit (int number , int bit){

    number = number ^ (1 << bit);
    return number;
}