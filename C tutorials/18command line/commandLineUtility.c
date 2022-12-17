#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("----The value of argc is %d-----\n", argc); //The first argument of main is the filename of that file

    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index %d has value %s\n", i, argv[i]);//at 0 index, first argument is should be .exe filename because not given another argument to main functions

        // {.\commandLineUtility.exe mapsh harry teacher marks 4 }
        // we can use another argument on exe file and argc value will be change.
    }
    
    return 0;
}
