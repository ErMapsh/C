/*
Stack: Stack is an ordered collection of items into which new data items may be added /inserted and from
which items may be deleted at only one end, called the top of the stack(tos).
As all the addition and deletion in a stack is done from the top of the stack, the last added element will be first removed from the stack.
That is why the stack is also called Last-in-First-out (LIFO).

Note... that the most frequently accessible element in the stack is the top most elements, whereas
the least accessible element is the bottom of the stack

====Stack having a two Operations====:
1.PUSH OPERATION: Procedure of adding new element at top of stack (tos) is called push operation.Suppose after adding
element maximum size is reach i.e. stack is full and if you want to add more element then it is not
possible. This situation is called stack overflow.

2.POP OPERATION: The procedure for removing element from top of stack (tos) is called pop operation.Every time when
we delete element tos is decremented by 1. When all elements are deleted then tos points to the bottom
of stack(-1), means stack is empty then it is not possible to delete more element .This situation is called stack underflow.

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define Max 20

int stack[Max], tos;
int push();
int pop();
int display();

int main()
{
    int choice = 0;
    tos = -1; // initially stack is empty so stack pointer is -1.

    printf("Stack operation");
    while (choice != 4)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter Correct choice\n");
        }
    }

    return 0;
}

int push()
{
    if (tos == Max - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        int num;
        tos++; // increament by 1
        printf("Enter Element:");
        scanf("%d", &num);
        stack[tos] = num;
        printf("Element Inserted\n");
    }
    return 0;
}

int pop()
{
    if (tos == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Element %d is pop from stack pointer %d\n", stack[tos], tos);
        tos--;
    }
    return 0;
}

int display()
{
        if (tos == -1)
        {
            printf("Stack is empty\n");
        }
        else
        {
            for (int i = tos; i >= 0; i--)
            {
                printf("Element of %i= %d\n",i, stack[i]);
            }
        }

    return 0;
}
