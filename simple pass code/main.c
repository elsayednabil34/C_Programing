#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned char Pass[7] = {'e', 'l', 's', 'a', 'y','e','d'};
unsigned char UserPass[7];

int main()
{
    unsigned int UserPassIndex = 0;
    unsigned int PassFlag = 0;
    unsigned int Trails =  0;

    while(Trails < 3){
        printf("Please enter pass : ");
        for(UserPassIndex = 0; UserPassIndex < 7; UserPassIndex++){
            scanf("%s", &UserPass[UserPassIndex]);
            fflush(stdin); /* Clear buffer */
        }
        printf("\n");

        printf("Please wait ");
        for(UserPassIndex = 0; UserPassIndex < 5; UserPassIndex++){
            printf(".");
            Sleep(200);
        }
        printf("\n");

        for(UserPassIndex = 0; UserPassIndex < 7; UserPassIndex++){
            if(UserPass[UserPassIndex] != Pass[UserPassIndex]){
                PassFlag = 1;
                break;
            }
        }

        if(1 == PassFlag){
            Trails++;
            PassFlag = 0;
            printf("Invalid Pass !!! \n");
            printf("Please enter your pass again \n");
        }
        else{
            printf("Welcome \n");
            break;
        }
    }

    return 0;
}
