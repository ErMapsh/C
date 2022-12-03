#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *PrevNode;
    struct Node *NextNode;
};

void Traversal(struct Node *head){
    struct Node *ptr = head;

    while(ptr->NextNode != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->NextNode;
    }
    printf("%d", ptr->data);
}

int main(int argc, char const *argv[])
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    //linking head to next node and previous
    head->PrevNode = NULL;
    head->data = 1;
    head->NextNode = second;

    //linking second node to head and third
    second->data = 2;
    second->PrevNode = head;
    second->NextNode = third;

    //linking third node to second and fourth
    third->data = 3;
    third->PrevNode = second;
    third->NextNode = fourth;

    //linking fourth node to third and fifth
    fourth->data = 4;
    fourth->PrevNode = third;
    fourth->NextNode= fifth;

    //linking fifth to fourth and Null
    fifth->data = 5;
    fifth->PrevNode = fourth;
    fifth->NextNode = NULL;

    Traversal(head);
    return 0;
}