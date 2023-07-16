#include <stdio.h>
#include <stdlib.h>

int *Ptr = NULL;

char *Ptr_2 = NULL;

int main (void){

    /*********************************************/
    printf("Adress of Ptr before = 0x%X \n", Ptr );
    Ptr = (int *)malloc(sizeof(int));
    if(NULL==Ptr){
        printf("there is a problem !! \n");
    } else {
        printf("Adress of Ptr after  = 0x%X \n", Ptr );
    }
    /*********************************************/
    printf("Adress of Ptr_2 before = 0x%X \n", Ptr_2 );
    Ptr_2 = (char *)malloc ((50*sizeof(unsigned char)));

    if(NULL==Ptr_2){
        printf("there is a problem !! \n");
    } else {
        printf("Adress of Ptr_2 after  = 0x%X \n", Ptr_2 );
    }
    /*********************************************/

    /* assignment value in address */

    *Ptr   = 0x22; 
    *Ptr_2 = 0x33; 


    /* if I want to assignment value to the next address ?? */

    Ptr++
    *Ptr= 0x55;   // this is bad way 
    /*the best way to */

    *(Ptr +1) = 0x66;   /* كده انا مبخليش البوينتر يتحرك من مكانه وبيشاور عن نفس العنوان اللي فيه */
      
}
