#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int r;
    int f;
    int *arr;
};

int isFull(struct Queue *q)
{
    if (q->rear >= q->size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue *q)
{
    if (q->front == q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Add(struct Queue *q)
{
    if (isFull(q))
    {
        printf("Queue is Full..\n");
        return 0;
    }
    else
    {
        int data;
        printf("Enter Your No: ");
        scanf("%d", &data);
        q->arr[q->rear] = data;
        q->rear++;
        return 1;
    }
}

int Delete(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty..\n");
        return 0;
    }
    else
    {
        for (int i = q->front; i < q->rear; i++)
        {
            q->arr[i] = q->arr[i + 1];
        }
        q->rear--;
    }
}

void Transversal(struct Queue *q)
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
    // intializing a queue
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 400;
    q->r = q->f = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // BFS implementation
    int u;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0}
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0, 0},
        {1, 1, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},
    };

    printf("%d", visited[i]);   
    return 0;
}