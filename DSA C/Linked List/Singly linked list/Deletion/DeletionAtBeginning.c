#include <stdio.h>
#include <stdlib.h>

// created abstract data type
struct Node
{
    int data;
    struct Node *ToNextPtr; // this ptr will be point next struct Node so we here return that Next Node type and ToNextPtr for storing struct address and after we can dereferance
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->ToNextPtr;
    }

    printf("\n");
}

struct Node *DeleteAtBeginning(struct Node *head)
{
    struct Node *ptr = head;
    head = ptr->ToNextPtr;
    free(ptr);
    return head;
}

struct Node *DeleteInBetween(struct Node *head, int index)
{
    struct Node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->ToNextPtr;
        i++;
    }

    struct Node *ptr1;
    ptr1 = ptr->ToNextPtr;
    ptr->ToNextPtr = ptr1->ToNextPtr;
    free(ptr1);

    return head;
}
struct Node *DeleteAtEnd(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *ptr1 = head->ToNextPtr;

    while (ptr1->ToNextPtr != NULL)
    {
        ptr = ptr->ToNextPtr;
        ptr1 = ptr1->ToNextPtr;
    }

    ptr->ToNextPtr = NULL;
    free(ptr1);
    return head;
}

struct Node *DeleteNodeByValue(struct Node *head, int Value)
{
    struct Node *ptr = head;
    struct Node *ptr1 = head->ToNextPtr;

    while (ptr1->data != Value)
    {
        ptr = ptr->ToNextPtr;
        ptr1 = ptr1->ToNextPtr;
    }

    ptr->ToNextPtr = ptr1->ToNextPtr;
    free(ptr1);

    return head;
}
int main(int argc, char const *argv[])
{
    struct Node *head;   // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *second; // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *third;  // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *fourth; // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *fifth;  // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *sixth;  // here we created ptr that can store address of new created heap and then we gonna created

    // allocate memory in heap
    head = (struct Node *)malloc(sizeof(struct Node));   // here we create storage in heap
    second = (struct Node *)malloc(sizeof(struct Node)); // here we create storage in heap
    third = (struct Node *)malloc(sizeof(struct Node));  // here we create storage in heap
    fourth = (struct Node *)malloc(sizeof(struct Node)); // here we create storage in heap
    fifth = (struct Node *)malloc(sizeof(struct Node));  // here we create storage in heap
    sixth = (struct Node *)malloc(sizeof(struct Node));  // here we create storage in heap

    // linking first and second node
    head->data = 7;
    head->ToNextPtr = second; // point to next node

    // linking second and third node
    second->data = 12;
    second->ToNextPtr = third; // point to next node

    // linking third and fourth node
    third->data = 18;
    third->ToNextPtr = fourth; // point to next node

    // linking third and fourth node
    fourth->data = 27;
    fourth->ToNextPtr = fifth; //  point to next node

    // linking third and fourth node
    fifth->data = 73;
    fifth->ToNextPtr = sixth; //  point to next node

    // linking third and fourth node
    sixth->data = 111;
    sixth->ToNextPtr = NULL; // nothing to point

    // Terminate the list at the fourth node
    printf("Non-operational Linked List..\n");
    linkedListTraversal(head);

    // deletion at beginning
    printf("Deleting node from Beginning\n");
    head = DeleteAtBeginning(head);
    linkedListTraversal(head);

    // deletion in between linked list by given index
    printf("Deleting Node by given index and index is starting from 0..\n");
    int index = 3;
    head = DeleteInBetween(head, index);
    linkedListTraversal(head);

    // deletion at end;
    printf("Deleting Node at End..\n");
    head = DeleteAtEnd(head);
    linkedListTraversal(head);

    // deletion of Node by Value;
    printf("Deleting Node by given Value, its here 18..\n");
    int value = 18;
    head = DeleteNodeByValue(head, value);
    linkedListTraversal(head);

    return 0;
}