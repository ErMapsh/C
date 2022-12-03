#include <stdio.h>
#include <stdlib.h>

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
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
        // printf("element pushed..\n\n");
    }

    return 1;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        // printf("Stack is Empty\n\n");
    }
    else
    {
        ptr->top--;
    }
    return 1;
}

int ParenthesisMatch(char *exp)
{
    // create and initialise a stack
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack));
    sp->arr = (char *)malloc(100 * sizeof(char));
    sp->top = -1;
    sp->size = 100;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    // when for loop is ending that time that time we goona checking stack is empty or not
    // condition says if stack is not empty at end then expression is unbalanced
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *Expression = (char *)malloc(100 * sizeof(char));
    Expression = "8*(9) + (9*43)";
    // printf("Enter Your Expression: ");
    // gets(Expression);

    if (ParenthesisMatch(Expression))
    {
        printf("Parenthesis Matches..\n");
    }
    else
    {
        printf("Parenthesis Not Matches..\n");
    }
    return 0;
}
