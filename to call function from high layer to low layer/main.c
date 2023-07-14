#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

void print_info(void);
typedef struct student {
    char name[30];
    int degree;
    int id;
    void (*Ptr)(void);
}student_t;
student_t ahmed={"elsayed nabil ",100,1};


int main (void){
    ahmed.Ptr=print_info;
    printf("info of ahmed \n ");
    ahmed.Ptr();
}

void print_info(void){
    printf("name   = %s \n",ahmed.name);
    printf("degree = %i \n",ahmed.degree);
    printf("id     = %i \n",ahmed.id);
}