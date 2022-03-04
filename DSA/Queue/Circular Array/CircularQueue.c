#include <stdio.h>
#include <stdlib.h>

struct CircularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(struct CircularQueue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct CircularQueue *q)
{
    if (q->rear == q->front )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct CircularQueue *q)
{
    if (isFull(q))
    {
        printf("QUEUE IS OVERFLOW\n");
    }
    else
    {
        int data;
        printf("Enter Your Number: ");
        scanf("%d", &data);

        q->arr[q->rear] = data;
        q->rear = (q->rear + 1) % q->size;
    }
}

void dequeue(struct CircularQueue *q)
{
    if (isEmpty(q))
    {
        printf("QUEUE IS UNDERFLOW\n");
    }
    else
    {
        printf("%d value delected..\n", q->arr[q->front]);
        q->front = (q->front + 1) % q->size;
    }
}

void Transversal(struct CircularQueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty...\n");
    }
    else
    {
        for (int i = q->front; i < q->rear; i++)
        {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    struct CircularQueue *CQ = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    CQ->size = 4;
    CQ->front = CQ->rear = 0;
    CQ->arr = (int *)malloc(CQ->size * sizeof(int));
    int choice;

    while (1)
    {

        printf("1.add\n2.delete\n3.Display\n4.exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(CQ);
            break;
        case 2:
            dequeue(CQ);
            break;
        case 3:
            Transversal(CQ);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter Correct choice..\n");
            break;
        }
    }
    return 0;
}