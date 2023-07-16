#include <stdio.h>
#include <stdlib.h>


unsigned int  elements = 0; 
int *Ptr = NULL; 


int main (void){
    printf("Please enter number of elements : ");
    scanf("%i",&elements);
    Ptr = (int *)calloc(elements,sizeof(int));
    if(Ptr == NULL ){
        printf("ERROR !! \n");
    }else {
        printf("Ptr address after calloc = 0x%X  \n",Ptr);
        printf("And its size is %i  \n",(elements*sizeof(int)) );
    }


    /*Printing addressess and its value */
    for(int i= 0; i<elements ; i++ ){
        printf("Address [0x%x] = 0X%x \n",(Ptr+i) ,*(Ptr+i));
    }
    
    
      
}
