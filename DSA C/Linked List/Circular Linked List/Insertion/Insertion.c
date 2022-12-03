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

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *InsertAtBeginning(struct Node *head, int data){  
    //creating a New node
    struct Node *Nnode = (struct Node*)malloc(sizeof(struct Node));
    Nnode->data = data;

    struct Node * ptr =  head->next;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    // at this point ptr will point last node in linked list
    ptr->next = Nnode;
    Nnode->next = head;
    return head;
}

struct Node * InsertByIndex(struct Node *head, int index, int data){
    struct Node *ptr = head;
    int i = 0;
    while(i != index-1){
        ptr = ptr->next;
        i++;
    }
    //creating new Node
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = data;
    NewNode->next = ptr->next;
    ptr->next = NewNode;
    return head;
}

struct Node *InsertAtEnd(struct Node *head, int data){
    struct Node *ptr = head;
    while (ptr->next != head){
       ptr =  ptr->next;
    }

    //creating new Node
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = data;

    ptr->next = NewNode;
    NewNode->next = head;
    return head;

}
int main(int argc, char const *argv[])
{   
    //we have 3 operation 

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


    //atbeginning
    head = InsertAtBeginning(head, 1);
    Traversal(head);
    printf("\n");

    //atIndex
    head = InsertByIndex(head, 3, 401);
    Traversal(head);
    printf("\n");
 
    //atEnd
    head = InsertAtEnd(head, 501);
    Traversal(head);
    printf("\n");

    return 0;
}
