/*
These are also called ‘Jump Statement’.
It is used to transfer the control to a predefined label.
It’s use is avoided since it causes confusion for the fellow programmers in understanding code.
goto statement is preferable when we need to break multiple loops using a single statement at the same time.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    printf("Hello World\n");
    start: 
        printf("We are inside lebel\n");
        goto end;
    goto start;

    end: 
        printf("We are at end");
    */

    int num;
    for (int i = 0; i < 10; i++)
    {
        // printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {   
            printf("Enter any number & To Exit Press 0:");
            scanf("%d", &num);
            if(num == 0){
                goto end;
            }
        }
        
    }
    
    end:
        printf("we are at end");

    return 0;
}
