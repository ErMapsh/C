#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *front = NULL;
struct Node *rear = NULL;


void Display()
{
    if (front == NULL)
    {
        printf("Queue is underflow");
    }
    else
    {

        struct Node *ptr = front;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
}

void enqueueRear()
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node));
    if (nnode == NULL)
    {
        printf("Queue Overflow...\n");
    }
    else
    {
        int n;
        printf("Enter Your Data: ");
        scanf("%d", &n);
        nnode->data = n;
        if (front == NULL)
        {
            nnode->next = NULL;
            nnode->prev = NULL;
            front = nnode;
            rear = nnode;
        }
        else
        {
            nnode->next = NULL;
            nnode->prev = rear;
            rear->next = nnode;
            rear = nnode;

        }
    }
}

void enqueueFront()
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node));
    if (nnode == NULL)
    {
        printf("Queue Overflow...\n");
    }
    else
    {
        int n;
        printf("Enter Your Data: ");
        scanf("%d", &n);
        nnode->data = n;
        if (front == NULL)
        {
            nnode->next = NULL;
            nnode->prev = NULL;
            front = nnode;
            rear = nnode;
        }
        else
        {
            nnode->prev = NULL;
            nnode->next = front;
            front = nnode;
        }
    }
}

void dequeueFront()
{
    if (front == NULL)
    {
        printf("Queue Underflow...\n");
    }
    else
    {
        struct Node *ptr = front;
        front = front->next;
        free(ptr);
    }
}

void dequeueRear()
{
    if (front == NULL)
    {
        printf("Queue Underflow...\n");
    }
    else
    {
        struct Node *ptr = rear;
        rear = rear->prev;
        free(ptr);
    }
}

int main(int argc, char const *argv[])
{
    printf("Queue using Linked List..\n");
    int choice;
    while (1)
    {
        printf("\n1.Add from rear\n2.Delete from front \n3.Add from front \n4.Delete from rear\n5.Display\n6.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueueRear();
            break;
        case 2:
            dequeueFront();
            break;
        case 3:
            enqueueFront();
            break;
        case 4:
            dequeueRear();
            break;
        case 5:
            Display();
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
