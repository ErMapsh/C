#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Left;
    struct Node *Right;
};

struct Node *CreateNode(int data)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // creating a node pointer and allocate memory in heap
    nnode->data = data;
    nnode->Left = NULL;
    nnode->Right = NULL;
    return nnode; // returning a crated node
}

void Display(struct Node *root, int noOfNodes)
{      
    //hardcoring 
    printf("%d", root->data);
    struct Node *ptr;

    // print left data 
    ptr = root->Left;
    printf("%d", ptr->data);

    // print right data
    ptr = root->Right;
    printf("%d", ptr->data);
    
}

int main(int argc, char const *argv[])
{
    /*
    // constructing the root Node
    struct Node *root;
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 1;
    root->Left = NULL;
    root->Right = NULL;

    // constructing the first Node
    struct Node *A;
    A = (struct Node *)malloc(sizeof(struct Node));
    A->data = 2;
    A->Left = NULL;
    A->Right = NULL;

    // constructing the first Node
    struct Node *B;
    B = (struct Node *)malloc(sizeof(struct Node));
    B->data = 3;
    B->Left = NULL;
    B->Right = NULL;

    // Linking the root node with left and right children
    root->Left = A;
    root->Right = B;
    */

    struct Node *root = CreateNode(1);
    struct Node *A = CreateNode(2);
    struct Node *B = CreateNode(3);

    root->Left = A;
    root->Right = B;

    Display(root, 3);

        return 0;
}