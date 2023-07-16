#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr=NULL; 
unsigned int  number_of_elements;
unsigned int Sum;
int main (void){
    printf("please enter length of array : ");
    scanf("%i",&number_of_elements);
    Ptr = (unsigned int*)malloc(((number_of_elements)*sizeof(int)));

    /*Validation*/

    if(NULL==Ptr){
        printf("Erorr !!    \n");
    }else{


        for(unsigned int i=0; i<number_of_elements;i++ ){
            Ptr[i]=i;    /* Assignment values to array */
            printf("Address of element [%i] and its address [0x%X] \n",i,(Ptr+i));
            Sum += Ptr[i];

        }
        printf("Summing of Ptr = %i \n",Sum);


        free(Ptr);
    }
    

}
