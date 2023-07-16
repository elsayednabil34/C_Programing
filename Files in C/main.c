#include <stdio.h>
#include <stdlib.h>

FILE *My_File = NULL; 
unsigned int no_of_student = 4;
char arr[50];

int main (void){


    /***************************************************/
    My_File = fopen("test.txt","w");

        if(My_File==NULL){
            printf("ERROR !! \n");                                   /*    fopen        */
        }else{
            printf("File has been created  !! \n");
            for(int i = 1 ; i<no_of_student;i++){
                printf("Please enter student name :");
                gets(arr);
                fprintf(My_File,"%i.Name : [%s] \n ",i,arr);
            }
        }

    int flag = fclose(My_File); //close the file  // return int (0==>close )(value ==> failed to execute)
    if(flag==0){
        printf("Done!!");
    }else {
        printf("ERORR !!");
    }
    /***************************************************/


    /***************************************************/






    /***************************************************/


    return 0;
}


