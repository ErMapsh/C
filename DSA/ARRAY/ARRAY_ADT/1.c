#include <stdio.h>
#include <stdlib.h>

// this is ADT: abstract data type
struct MyArray{
    // this is only information
    int total_size;
    int used_size;
    int *ptr;
};

void CreateArray(struct MyArray *StructPointer, int tSize, int uSize){
    /* 
     printf("%d", (*StructPointer)); // this is base address of our array or structure
     (*StructPointer).total_size = tSize;
     (*StructPointer).used_size = uSize;
     (*StructPointer).ptr = (int *)malloc(tSize * sizeof(int)); // here create array in heap
    */
    StructPointer->total_size = tSize;
    StructPointer->used_size = uSize;
    StructPointer->ptr = (int *)malloc(StructPointer->total_size * sizeof(int)); // here create array in heap
};

void SetValue(struct MyArray *stuctPtr){
    int n;
    for (int i = 0; i < stuctPtr->used_size; i++)
    {
        printf("Enter Element %d : ", i);
        scanf("%d", &n);
        (stuctPtr->ptr)[i] = n;
    }
};

void Show(struct MyArray *stuctPtr){
    for (int i = 0; i < stuctPtr->used_size; i++)
    {
        printf("%d\n", (stuctPtr->ptr)[i]);
    }
}

int main(int argc, char const *argv[])
{
    struct MyArray Marks; // instance of MyArray
    printf("Creating Array..............\nDone...\n");

    CreateArray(&Marks, 10, 3); // here we pass Our Structure pointer, total student size and used size of student

    printf("We Are Running to get marks of reserved student....\n");
    SetValue(&Marks);

    printf("\nAnd Display all marks of students: \n");
    Show(&Marks);
    return 0;
}