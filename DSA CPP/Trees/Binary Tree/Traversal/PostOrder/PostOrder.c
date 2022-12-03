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
void PostOrderDisplay(struct Node *root)
{   
    // (Left subtree) (Right subtree) (root)
    if (root != NULL)
    {
        PostOrderDisplay(root->Left);
        PostOrderDisplay(root->Right);
        printf("%d ", root->data);
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

        Post order implemention like this:
        [left subtree] [right subtree] [root]
        [5     2    1]       6           4
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


    PostOrderDisplay(A);

    return 0;
}