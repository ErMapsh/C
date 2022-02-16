#include <stdio.h>
#include <stdlib.h>

//created abstract data type
struct Node
{
    int data;
    struct Node *ToNextPtr; // this ptr will be point next struct Node so we here return that Next Node type and ToNextPtr for storing struct address and after we can dereferance
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->ToNextPtr;
    }
}

int main(int argc, char const *argv[])
{
    struct Node *head;   // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *second; // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *third;  // here we created ptr that can store address of new created heap and then we gonna created
    struct Node *fourth; // here we created ptr that can store address of new created heap and then we gonna created

    // allocate memory in heap
    head = (struct Node *)malloc(sizeof(struct Node));   // here we create storage in heap
    second = (struct Node *)malloc(sizeof(struct Node)); // here we create storage in heap
    third = (struct Node *)malloc(sizeof(struct Node));  // here we create storage in heap
    fourth = (struct Node *)malloc(sizeof(struct Node)); // here we create storage in heap

    // linking first and second node
    head->data = 7;
    head->ToNextPtr = second;//point to next node

    // linking second and third node
    second->data = 12;
    second->ToNextPtr = third;//point to next node

    // linking third and fourth node
    third->data = 18;
    third->ToNextPtr = fourth;//point to next node

    // Terminate the list at the fourth node
    fourth->data = 27;
    fourth->ToNextPtr = NULL;//nothing to point

    linkedListTraversal(head);
    return 0;
}