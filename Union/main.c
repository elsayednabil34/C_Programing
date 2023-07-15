#include <stdio.h>

typedef union {
    int id; 
    float degree;
}student_t;

student_t ahmed;
student_t *ptr;
int main (void){
    ptr = &ahmed; 


    /*   First method  Using Dot operator */
    ahmed.id=1;
    printf("ahmed id = %i \n",ahmed.id);
    ahmed.degree=99;
    printf("ahmed`s degree = %0.2f \n",ahmed.degree);


    /* Second method   Using Pointer with arrow operator   */


    ptr->id = 2;
    printf("ahmed id = %i \n", ptr->id);
    ptr->degree = 98;
    printf("ahmed`s degree = %0.2f \n",ptr->degree);




}
