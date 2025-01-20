// Typecasting syntax:
// (type) value

#include<stdio.h>
int main()
{
    int a = 3;
    float b = 54.3;
    printf("The value of a + b is %d\n",(int)a + (int)b);
    printf("The value of a + b is %f\n",(float)a + (float)b);
    
    int chara;
    printf("Enter character:");
    scanf("%c", &chara);
    printf("The character is %c\n", chara);

    return 0;
}
