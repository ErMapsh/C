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
void InOrderDisplay(struct Node *root)
{   
    // (Left subtree) (Right subtree) (root)
    if (root != NULL)
    {
        InOrderDisplay(root->Left);
        printf("%d ", root->data);
        InOrderDisplay(root->Right);
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

        InOrder implemention like this:
        [left subtree] [root] [right subtree] 
        [5    1     2]    4           6
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


    InOrderDisplay(A);

    return 0;
}