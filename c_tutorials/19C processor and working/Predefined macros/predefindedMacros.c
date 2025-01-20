#include<stdio.h>
int main()
{
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__FILE__);
    printf("%d\n",__LINE__);// return in integer
    printf("%d\n",__STDC__);//return 0 and 1
    return 0;
}