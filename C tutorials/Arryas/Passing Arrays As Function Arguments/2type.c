#include<stdio.h>
void display();

int main()
{
    int arr[] = {11, 21, 13, 41};
    for (int i = 0; i < 4; i++)
    {
        display(&arr[i]);
    }
        return 0;

}

void display(int *ptr)
{
    printf("%d\n", *(ptr));
}