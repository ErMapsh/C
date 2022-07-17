#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
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

int push(struct stack *ptr, char data)
{
    if ((isFull(ptr)))
    {
        // printf("Stack Overflow..\n\n");
        return 0;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
        // printf("element pushed..\n\n");
    }

    return 1;
}

char Pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        // printf("Stack is Empty\n\n");
    }
    else
    {
        char ch = ptr->arr[ptr->top];
        ptr->top--;
        return ch;
    }
}

char stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int IsOperator(char a)
{
    if (a == '+' || a == '-' || a == '/' || a == '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Precedance(char a)
{
    if (a == '+' || a == '-')
    {
        return 2;
    }
    else if (a == '*' || a == '/')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

char *intoPostfix(char *infixExp)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); // allocating space
    sp->top = -1;
    sp->size = 100;
    sp->arr = (char *)malloc(sp->size * sizeof(char)); // allcating stack space for stack

    char *Postfix = (char *)malloc((strlen(infixExp) + 1) * sizeof(char)); // char array for storing postfix
    int j = 0;
    int i = 0;

    while (infixExp[i] != '\0') // getting all char one by one
    {
        if (IsOperator(infixExp[i]))
        {
            if (Precedance(infixExp[i]) > Precedance(stackTop(sp)))
            { /*
              if char is operator, that time need to
              compare top element precedance and current character
              */
                push(sp, infixExp[i]);
                i++;
            }
            else
            {
                Postfix[j] = Pop(sp);
                j++;
            }
        }
        else
        {
            Postfix[j] = infixExp[i];
            j++;
            i++;
        }
    }

    while (!isEmpty(sp))
    {
        Postfix[j] = Pop(sp);
        j++;
    }
    Postfix[j] = '\0';
    return Postfix;
}

int main(int argc, char const *argv[])
{
    char *infix = (char *)malloc(100 * sizeof(char));
    infix = "x-y/z-k*d"; // answer is xyz/-kd*-
    printf("Postfix is %s", intoPostfix(infix));
    return 0;
}