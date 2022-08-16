#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} SN;

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int isFull(struct Node *top, int stackSize)
{
    int i = 0;
    while (top != NULL)
    {
        top = top->next;
        i++;
    }

    if (i >= stackSize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    /*
        when we implementing a stack using linked list that time is easy to push/pop element at start. so thats why we pop/push node from beginning/head, its doen in O(1). beacause we choose last node then we travles all node that are between.so we push last element in stack.
    */

    int choice, StackSize = 10;
    struct Node *top = NULL;
    // printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    // printf("Enter Your Choice: ");
    // scanf("%d", &choice);

    if (isEmpty(top))
    {
        printf("Attension--->Stack Underflow\n");
    }

    if (isFull(top, StackSize))
    {
        printf("Attension--->Stack Overflow, U Cant insert value\n\n");
    }
    else
    {
        printf("Attension--->You Can Insert\n");
    }
    return 0;
}