#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *ToNextPtr;
};

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // we create a new nnode
    nnode->ToNextPtr = head;
    nnode->data = data;
    return nnode; // return nnode because in heap that goona must linked to head
}

struct Node *insertAtIndex(struct Node *head, int index, int data)
{
    /*
        i want insert new node between two node and there is index where we gonna linked a new node,
    */
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // we create a new nnode
    nnode->data = data;
    struct Node *IndexPtr = head;

    int i = 0;
    while (i != index - 1)
    {
        IndexPtr = IndexPtr->ToNextPtr;
        i++;
    }

    nnode->ToNextPtr = IndexPtr->ToNextPtr;
    IndexPtr->ToNextPtr = nnode;

    return head;
}

struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // we create a new nnode
    nnode->data = data;
    struct Node *IndexPtr = head;

    while (IndexPtr->ToNextPtr != NULL)
    {
        IndexPtr = IndexPtr->ToNextPtr;
    }
    IndexPtr->ToNextPtr = nnode;
    nnode->ToNextPtr = NULL;
    return head;
}

struct Node *InsertAfter(struct Node *head, struct Node *previousNode, int data){
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // we create a new nnode
    nnode->data = data;
    nnode->ToNextPtr = previousNode->ToNextPtr;
    previousNode->ToNextPtr = nnode;
    return head;
}

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->ToNextPtr;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{

    struct Node *head;   // here we created ptr that can store address of new created memory in heap
    struct Node *second; // here we created ptr that can store address of new created memory in heap
    struct Node *third;  // here we created ptr that can store address of new created memory in heap
    struct Node *fourth; // here we created ptr that can store address of new created memory in heap

    // allocate memory in heap
    head = (struct Node *)malloc(sizeof(struct Node));   // here we assign heap value to node pointer
    second = (struct Node *)malloc(sizeof(struct Node)); // here we assign heap value to node pointer
    third = (struct Node *)malloc(sizeof(struct Node));  // here we assign heap value to node pointer
    fourth = (struct Node *)malloc(sizeof(struct Node)); // here we assign heap value to node pointer

    // linking first and second node
    head->data = 7;
    head->ToNextPtr = second; // point to next node

    // linking second and third node
    second->data = 12;
    second->ToNextPtr = third; // point to next node

    // linking third and fourth node
    third->data = 18;
    third->ToNextPtr = fourth; // point to next node

    // Terminate the list at the fourth node
    fourth->data = 27;
    fourth->ToNextPtr = NULL; // nothing to point

    linkedListTraversal(head);

    // insert at beginning
    head = insertAtFirst(head, 56);
    linkedListTraversal(head);

    // insert between node
    head = insertAtIndex(head, 2, 45);
    linkedListTraversal(head);

    // insert at end
    head = InsertAtEnd(head, 169);
    linkedListTraversal(head);

    //insert after node;
    head = InsertAfter(head, second, 766);
    linkedListTraversal(head);
    return 0;
}