#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(struct stack *ptr, int value)
{
    if ((isFull(ptr)))
    {
        printf("Stack Overflow..\n\n");
    }
    else
    {
        int data = value;
        ptr->top++;
        ptr->arr[ptr->top] = data;
        printf("element pushed..\n\n");
    }

    return 1;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty\n\n");
    }
    else
    {
        printf("%d Item Is Poped\n\n", ptr->arr[ptr->top]);
        ptr->top--;
    }
    return 1;
}

int display(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty\n\n");
    }
    else
    {
        printf("Elements Are: ");
        for (int i = 0; i < ptr->top + 1; i++)
        {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n\n");
    }
}

int peedValue(struct stack *ptr, int index)
{
    if (index == -1)
    {
        printf("Stack is empty...\n");
    }
    else
    {
        if (ptr->size - 1 >= index)
        {

            if (index <= ptr->top)
            {
                printf("Element is %d \n\n", ptr->arr[index]);
            }
            else
            {
                printf("invalid value or not defined..\n\n");
            }
        }
        else
        {
            printf("index is out of size..\n\n");
        }
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 34);
    push(s, 3);
    push(s, 1);
    push(s, 6);s
    push(s, 101);
    display(s);

    // peek operation in here
    peedValue(s, 4);
    peedValue(s, 5);
    peedValue(s, 15);
    return 0;
}
