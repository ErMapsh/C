#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void Display()
{
    while (front != NULL)
    {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("%d ", front->data);
}

void enqueue()
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
        nnode->next = NULL;
        if (front == NULL)
        {
            front = nnode;
            rear = nnode;
        }
        else
        {
            rear->next = nnode;
            rear = nnode;
        }
    }
}

void dequeue()
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

int main(int argc, char const *argv[])
{
    printf("Queue using Linked List..\n");
    int choice;
    while (1)
    {
        printf("\n1.Add\n2.Delete\n3.Display\n4.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter Correct Choice...\n");
            break;
        }
    }

    return 0;
}
