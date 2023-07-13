#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct student {
    char name[30]; 
    float degree; 
    unsigned int id;
};
struct student ahmed;
struct student ali;


int main (void){
    
    strcpy(ahmed.name,"ahmed nabil");
    strcpy(ali.name,"ali mohamed ali ");

    ahmed.degree=10.0;
    ali.degree=10.0;

    ahmed.id=1;
    ali.id=2;


    printf("ahmed.name = %s \n",ahmed.name );
    printf("ahmed.degree = %0.2f \n",ahmed.degree );
    printf("ahmed.id = %i \n",ahmed.id );
    
    printf("-------------------------------------------\n");
    printf("ali.name = %s \n",ali.name );
    printf("ali.degree = %0.2f \n",ali.degree );
    printf("ali.id = %i \n",ali.id );


}   

