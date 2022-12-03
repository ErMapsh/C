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

struct Node *DeleteItemAtBegin(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *ptr1 = head;

    while (ptr1->next != head)
    {
        ptr1 = ptr1->next;
    }

    ptr1->next = ptr->next;
    head = ptr->next;
    free(ptr);
    return head;
}

struct Node *DeleteItemByindex(struct Node *head, int index)
{

    struct Node *ptr = head;
    struct Node *ptr1 = head->next;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        ptr1 = ptr1->next;
        i++;
    }

    ptr->next = ptr1->next;
    free(ptr1);
    return head;
}

struct Node *DeleteItemByValue(struct Node *head, int value)
{

    struct Node *ptr = head;
    struct Node *ptr1 = head->next;
    while(ptr1->data != value){
        ptr = ptr->next;
        ptr1 = ptr1->next;
    }

    ptr->next = ptr1->next;
    free(ptr1);
    return head;
}

struct Node *DeleteItemAtEnd(struct Node *head)
{

    struct Node *ptr = head;
    struct Node *ptr1 = head->next;
    while(ptr1->next != head){
        ptr = ptr->next;
        ptr1 = ptr1->next;
    }

    ptr->next = ptr1->next;
    return head;
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
    printf("\n");

    // Deleting item at beginnig
    head = DeleteItemAtBegin(head);
    Traversal(head);
    printf("\n");

    // Deleting item by index
    head = DeleteItemByindex(head, 3);
    Traversal(head);
    printf("\n");

    // Deleting item by value
    head = DeleteItemByValue(head, 55);
    Traversal(head);
    printf("\n");

    //deleting item at end
    head = DeleteItemAtEnd(head);
    Traversal(head);
    printf("\n");

    return 0;
}
