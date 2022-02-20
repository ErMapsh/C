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
int StackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int StackBotton(struct stack *ptr){
    return ptr->arr[0];
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
    push(s, 6);
    push(s, 101);
    display(s);

    printf("Top most element of stack is %d\n", StackTop(s));
    printf("Bottom element of stack is %d\n", StackBotton(s));
  
    return 0;
}
