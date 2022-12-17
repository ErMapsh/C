#include <stdio.h>
#define PI 3.14 // here we can define preprcessor like for default value

int main(int argc, char const *argv[])
{   
    // ---------------formating ---------------
    float a = 3.333;
    int b = 23;
    printf("Hello....");
    printf("value of a is %6.3f and value of b is %d\n", a, b);

    // ---------------Constant ---------------
    const int Num = 2333;
    // Num = 2;//we can't change cause is begin constant
    printf("%d\n", Num);


    // ---------------Preprocessor defining: we cant change const after Defining---------------
    printf("%f\n\n", PI);


    // ---------------Escape Sequence in C---------------
    printf("My blackslash is \\n\n");
    printf("My tab is \\t \t in sentence \a\n");
    printf("My alarm is \a ");
    return 0;
}
