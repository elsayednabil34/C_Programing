#include <stdio.h>
#include <stdlib.h>

int *Ptr = NULL;

int main (void){


    Ptr = (int *)malloc(sizeof(int));
    printf("Before Using Free \n");
    printf("Adress of pointer = 0x%X \n",Ptr);
    *Ptr = 10;
    

    if (NULL== Ptr){
        printf("Error");
        
    }else {
        *Ptr = 10;
        printf("value of adress = 0x%X \n",*Ptr);
        free(Ptr);

    }

    printf("After Using Free \n");
    printf("Adress of pointer = 0x%X \n",Ptr);
    printf("value of adress = 0x%X \n",*Ptr);

}
