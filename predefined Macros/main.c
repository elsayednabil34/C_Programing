#include <stdio.h>

int main (void)
{

    printf("File name is = %s \n", __FILE__);  //to print working file 

    printf("Program compilation date  is = %s \n", __DATE__); //to print date when compling 

    printf("time compilation  is = %s \n", __TIME__); // to print time when compling

    printf("LINE in Code = %d \n", __LINE__); // to print line of Code 




    return 0;
}