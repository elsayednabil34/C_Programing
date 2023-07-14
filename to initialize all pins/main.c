#include <stdio.h>


typedef union {
struct {
    unsigned char Pin0 :1;
    unsigned char Pin1 :1;
    unsigned char Pin2 :1;
    unsigned char Pin3 :1;
    unsigned char Pin4 :1;
    unsigned char Pin5 :1;
    unsigned char Pin6 :1;
    unsigned char Pin7 :1;

    };
    unsigned char Allports;
}reg_t;


reg_t reg1;


int main (){
    reg1.Allports = 0x55;   /*take care ... assignment doesn`t occur in global area .. just inside main */
    printf("Pin0 in reg1 = %i \n" , reg1.Pin0 );
    printf("Pin1 in reg1 = %i \n" , reg1.Pin1 );
    printf("size of reg1 in bytes = %i \n" , sizeof(reg1) );
    return 0;
}