#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Left;
    struct Node *Right;
};

// Create A node via function
struct Node *CreateNode(int data)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // creating a node pointer and allocate memory in heap
    nnode->data = data;
    nnode->Left = NULL;
    nnode->Right = NULL;
    return nnode; // returning a crated node
}

// Traversal in Binary tree
void PreOrderDisplay(struct Node *root)
{   
    //this functions say if given ptr is null do nothing
    // if not null then print data and go for left and right node 
    if (root != NULL)
    {
        printf("%d ", root->data);
        PreOrderDisplay(root->Left);
        PreOrderDisplay(root->Right);
    }
}

int main(int argc, char const *argv[])
{   
    /*
        Tree seen like this
                4
               / \
               1  6
              / \
              5  2

        PreOrder implemention like this:
        [root]  [left subtree] [right subtree] 
           4    [1     5    2]       6          
    */
    struct Node *A = CreateNode(4);
    struct Node *B = CreateNode(1);
    struct Node *C = CreateNode(6);
    struct Node *D = CreateNode(5);
    struct Node *E = CreateNode(2);

    // for root node A
    A->Left = B;
    A->Right = C;

    // for node B
    B->Left = D;
    B->Right = E;


    PreOrderDisplay(A);

    return 0;
}