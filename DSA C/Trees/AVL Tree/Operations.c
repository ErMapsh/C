#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Left;
    struct Node *Right;
    int height;
};

int max(int a, int b)
{
    return a > b ? a : b;
}
// for getting height
int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

// for creating a Node
struct Node *CreateNode(int data)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node)); // creating a node pointer and allocate memory in heap
    nnode->Right = NULL;
    nnode->Left = NULL;
    nnode->data = data;
    nnode->height = 1; // new node will connected to parent node then height of that new node is 1

    return nnode;
}

int getBalancedFactor(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return getHeight(n->Left) - getHeight(n->Right);
    }
}

// Right Rotation
struct Node *RightRotate(struct Node *y)
{
    struct Node *x = y->Left;
    struct Node *T2 = x->Right;

    // to right wiring
    x->Right = y;
    y->Left = T2;

    y->height = max(getHeight(y->Right), getHeight(y->Left)) + 1;
    x->height = max(getHeight(x->Right), getHeight(x->Left)) + 1;

    return x;
}

// Left Rotation
struct Node *LeftRotate(struct Node *x)
{
    struct Node *y = x->Right;
    struct Node *T2 = y->Left;

    y->Left = x;
    x->Right = T2;

    y->height = max(getHeight(y->Right), getHeight(y->Left)) + 1;
    x->height = max(getHeight(x->Right), getHeight(x->Left)) + 1;

    return x;
}

void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->Left);
        preOrder(root->Right);
    }
}

struct Node *Insertion(struct Node *n, int data)
{
    if (n == NULL)
    {
        return (CreateNode(data));
    }

    if (data < n->data)
    {
        n->Left = Insertion(n->Left, data);
        return n;
    }
    else if (data > n->data)
    {
        n->Right = Insertion(n->Right, data);
        return n;
    }

    n->height = 1 + max(getHeight(n->Left), getHeight(n->Right));
    int bf = getBalancedFactor(n);

    // LL
    if (bf > 1 && data < n->Left->data)
    {
        return RightRotate(n);
    }

    // RR
    if (bf < -1 && data > n->Right->data)
    {
        return LeftRotate(n);
    }

    // LR
    if (bf > 1 && data > n->Left->data)
    {
        n->Left = LeftRotate(n->Left);
        return RightRotate(n);
    }

    //  RL
    if (bf < -1 && data < n->Left->data)
    {
        n->Right = RightRotate(n->Right);
        return LeftRotate(n);
    }

    return n;
};

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

    */
    struct Node *A = NULL;
    A = Insertion(A, 1);
    A = Insertion(A, 2);
    A = Insertion(A, 3);
    A = Insertion(A, 7);
    A = Insertion(A, 4);
    A = Insertion(A, 5);
    A = Insertion(A, 6);

    preOrder(A);
    return 0;
}