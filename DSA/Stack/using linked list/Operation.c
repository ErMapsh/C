#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

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
}

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
}

struct Node *Push(struct Node *top, int stackSize)
{
    if (isFull(top, stackSize))
    {
        printf("Stack is full..\n");
        return top;
    }
    else
    {
        struct Node *nnode = (struct Node *)malloc(sizeof(struct Node));
        int n;
        printf("Enter Number:");
        scanf("%d", &n);
        nnode->data = n;
        nnode->next = top;
        top = nnode;
        printf("Your Element %d is pushed into stack\n", nnode->data);
        return top;
    }
}

struct Node *Pop(struct Node *top)
{
    if (isEmpty(top))
    {
        printf("Stack is Empty u cant pop item..\n");
        return top;
    }
    else
    {
        struct Node *ptr = top;
        top = top->next;
        free(ptr);
        return top;
    }
}

struct Node *Display(struct Node *top)
{
    if (isEmpty(top))
    {
        printf("Stack is Empty\n");
    }
    else
    {
        struct Node *ptr = top;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
        return top;
    }
}

int main(int argc, char const *argv[])
{
    /*
        when we implementing a stack using linked list that time is easy to push/pop element at start. so thats why we pop/push node from beginning/head, its doen in O(1). beacause we choose last node then we travles all node that are between.so we push last element in stack.
    */

    int choice, StackSize = 3;
    struct Node *top = NULL;
    while (1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            top = Push(top, StackSize);
            break;
        case 2:
            top = Pop(top);
            break;
        case 3:
            top = Display(top);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter Correct choice..\n");
            break;
        }
    }

    // top = Push(top, StackSize);
    // Display(top);
    // top = Push(top, StackSize);
    // Display(top);
    // top = Push(top, StackSize);
    // Display(top);
    // top = Push(top, StackSize);
    // Display(top);
    // top = Push(top, StackSize);
    // Display(top);
    // top = Push(top, StackSize);
    // Display(top);
    // top = Push(top, StackSize);
    // Display(top);

    return 0;
}