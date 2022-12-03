#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int rear;
    int front;
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

int enqueue(struct Queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is Full..\n");
        return 0;
    }
    else
    {

        q->arr[q->rear] = data;
        q->rear++;
        return 1;
    }
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty..\n");
        return -1;
    }
    else
    {
        int a = q->arr[q->front];
        q->front++;
        return a;
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
    // intializing a queue, this is exploration queue
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 400;
    q->rear = q->front = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // BFS implementation
    int node;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    // multi dimensional array represented a graph
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

    printf("%d", i); // need to print source node.
    visited[i] = 1;  // so now i is visited. so 0 element is visited
    enqueue(q, i);   // enqueue i for exploration.  

    while (!isEmpty(q))
    {
        node = dequeue(q);//getting dequeue element from exploration queue
        // printf("node is %d\n", node);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)// if another node is connected and 
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(q, j);
            }
        }
    }

    return 0;
}