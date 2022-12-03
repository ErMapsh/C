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

int isBST(struct Node *root){
   if (root != NULL)
   {
       static struct Node * Prev = NULL;
       if(!isBST(root->Left)){
           return 0;
       }

       if (Prev != NULL && root->data <= Prev->data)
       {
           return 0;
       }

       Prev = root;
       return isBST(root->Right);
       
   }else{
       return 1;
   }
    
}

int main(int argc, char const *argv[])
{
    /*
        Tree seen like this
                9
               / \
               4  11
              / \   \
             2   7   15
                / \  /
               5  8 14

        InOrder implemention like this:
        [left subtree] [root] [right subtree]
        [5    1     2]    4           6
    */
    struct Node *A = CreateNode(9);
    struct Node *B = CreateNode(4);
    struct Node *C = CreateNode(11);
    struct Node *D = CreateNode(2);
    struct Node *E = CreateNode(7);
    struct Node *F = CreateNode(15);
    struct Node *G = CreateNode(5);
    struct Node *H = CreateNode(8);
    struct Node *I = CreateNode(14);

    // child node of A
    A->Left = B;
    A->Right = C;

    // child node of B
    B->Left = D;
    B->Right = E;

    // child Node of C
    C->Right = F;

    // child node of E
    E->Left = G;
    E->Right = H;

    // child node of F
    F->Left = I;

    InOrderDisplay(A);
    printf("\n");

    int isBst = isBST(A);
    if (isBst)
    {
        printf("isBST\n");
    }else{
        printf("Not Bst");
    }
    
 

    return 0;
}