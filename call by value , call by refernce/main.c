#include <stdio.h>

int numberone = 10;
int numbertwo = 20; 
void swap_1(int num1,int num2);
void swap_2(int *ptr1 , int *ptr2);
int main (void){
    printf("before swap \n ");
    printf("numberone = %i \t  numbertwo=%i \n",numberone,numbertwo);
    printf("after swap by value  \n ");
    swap_1(numberone,numbertwo);
    printf("after swap by reference \n ");
    swap_2(&numberone,&numbertwo); 
    /*real value in number one and number two */
    printf("numberone = %i \t  numbertwo=%i \n",numberone,numbertwo);
    


}
void swap_1(int num1,int num2){
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("numberone = %i \t  numbertwo=%i \n",num1,num2);
}
void swap_2(int *ptr1 , int *ptr2){
    if (  (ptr1 == NULL) || (ptr2 == NULL) ){
        printf("there is a problem\n);
    } else {
    int temp=0;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    }
    printf("numberone = %i \t  numbertwo=%i \n",*ptr1,*ptr2);
}
