#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    // while(ptr->next != head){
    //     printf("%d ", ptr->data);
    //     ptr = ptr->next;
    // }

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main(int argc, char const *argv[])
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // creating space in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // linking head to second
    head->data = 14;
    head->next = second;

    // linking second to third node
    second->data = 45;
    second->next = third;

    // linking third to fourth node
    third->data = 100;
    third->next = fourth;

    // linking fourth to fifth node
    fourth->data = 55;
    fourth->next = fifth;

    // linked last node to head node
    fifth->data = 34;
    fifth->next = head;

    // display
    Traversal(head);

    return 0;
}
