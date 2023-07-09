#include <stdio.h>

char *Ptr = NULL; 

int main (void){
    
    /* before assign value for variable in pointer */
    /* you should to check  if it is NULL or not */

    if(Ptr!= NULL ){
        *Ptr = 50; 
        }
    else {
        printf("Pointer is Null, you can't assign value ");

    }
}