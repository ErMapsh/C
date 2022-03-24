#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int *array;
};

int front = 0;
int rear = 0;

int isEmpty()
{
    if (front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *arr)
{
    if (arr->size - 1 <= rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Display(struct Queue *q)
{
    for (int i = 0; i <= q->size - 1; i++)
    {
        printf("%d ", q->array[i]);
    }
    printf("\n");
}

int enqueueR(struct Queue *arr)
{
    if (isFull(arr))
    {
        printf("Stack is Overflow...\n");
    }
    else
    {   
        int data;
        printf("Enter Your Data: ");
        scanf("%d", &data);
        if (isEmpty())
        {      
            rear = 0;
            front = 0;
            arr->array[front] = data;
        }else{
            rear++;
            arr->array[rear] = data;
        }
    }
}

int main(int argc, char const *argv[])
{
    int choice;

    // creating queue
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 5;
    q->array = (int *)malloc(q->size * sizeof(int));
    // printf("%d\n", isEmpty());// checking conditions
    // printf("%d\n", isFull(q));// checking conditions
    Display(q);
    // enqueueR(q);
    enqueueR(q);
    Display(q);


    // while (1)
    // {
    //     printf("\n1.Add from rear\n2.Delete from front \n3.Add from front \n4.Delete from rear\n5.Display\n6.Exit\nEnter Your Choice: ");
    //     scanf("%d", &choice);
    //     switch (choice)
    //     {
    //     case 1:
    //         enqueueRear();
    //         break;
    //     case 2:
    //         dequeueFront();
    //         break;
    //     case 3:
    //         enqueueFront();
    //         break;
    //     case 4:
    //         dequeueRear();
    //         break;
    //     case 5:
    //         Display();
    //         break;
    //     case 6:
    //         exit(1);
    //         break;
    //     default:
    //         printf("Enter Correct Choice...\n");
    //         break;
    //     }
    return 0;
}