#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int *array;
    int front;
    int rear;
};

int isEmpty(struct Queue *q)
{
    if (q->front == -1 && q->rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *q)
{
    if (q->rear >= (q->size - 1))
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
    for (int i = 0; i <= q->rear; i++)
    {
        printf("%d ", q->array[i]);
    }
    printf("\n");
}

int enqueueR(struct Queue *q)
{
    if (isFull(q))
    {
        printf("Queue is Overflow...\n");
    }
    else
    {
        int data;
        printf("Enter Your Data: ");
        scanf("%d", &data);

        q->rear++;
        q->array[q->rear] = data;
    }
}

int enqueueF(struct Queue *q)
{
    if (isFull(q))
    {
        printf("Queue is Overflow...\n");
    }
    else
    {
        int data;
        printf("Enter Your Data: ");
        scanf("%d", &data);
        for (int i = q->rear; i >= 0; i--)
        {
            q->array[i + 1] = q->array[i];
        }
        q->array[0] = data;
        q->rear++;
    }
}

int DequeueF(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Stack Underflow\n");
    }
    else
    {

        for (int i = 0; i <= q->rear; i++)
        {
            q->array[i] = q->array[i + 1];
        }

        q->rear--;
    }
}

int DequeueR(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        q->rear--;
    }
}

int main(int argc, char const *argv[])
{
    int choice;

    // creating queue
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 5;
    q->array = (int *)malloc(q->size * sizeof(int));
    q->front = q->rear = -1;
    // printf("%d\n", isEmpty(q));// checking conditions
    // printf("%d\n", isFull(q));// checking conditions

    while (1)
    {
        printf("\n1.Add from rear\n2.Delete from front \n3.Add from front \n4.Delete from rear\n5.Display\n6.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueueR(q);
            break;
        case 2:
            DequeueF(q);
            break;
        case 3:
            enqueueF(q);
            break;
        case 4:
            DequeueR(q);
            break;
        case 5:
            Display(q);
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("Enter Correct Choice...\n");
            break;
        }
    }
    return 0;
}