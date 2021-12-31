# Pointers:

Before discussing about pointers let me tell you when we define and initialize a variable at that time we come to know about these things :

- Memory block i.e. variable get some space in RAM and we can think of that as a block.
- Name of memory block or Variable’s name
- Content of that block i.e. value in that variable
- Address of memory block i.e. unique address which allows us to access that variable.

We can print address of any variable by using printf function as :

```C
printf(“%d”,&variable_name);
```

## Pointer:

1. Pointer is a variable that contains address of another variable. It means it is a variable but this variable contains address or memory address of any other variable.
2. It can be of type int, char, array, function, or any other pointer.
3. Its size depends on architecture.
4. Pointers in C Language can be declared using \*(asterisk symbol).

```C
#include <stdio.h>
int main()
{
    // Defining int var and poiner var
    int a = 5;
    int *ptr = &a; // here &x is memory location of x var in ram. it should be in hexadecimal.

    // Printing Address of x var
    printf("%p\n", &a);
    printf("%p\n", &ptr);

    // printing value in x using 2 way directly and pointer.
    printf("%d\n", *ptr);// here printing value in address that store pointer
    printf("%d\n", a);

    return 0;
}
```

So, pointers are nothing just a variable which stores the address of other variables and by using pointers we can access other variables too and can even manipulate them.

Now let’s see about some of the operators which we use with Pointers :

## Address of Operator (&) :

- It is a unary operator.

- Operand must be the name of the variable.

- & operator gives address no. of variable.

- & is also known as “Referencing Operator”.

## Indirection Operator :

- - is indirection operator.

- It is also known as “Dereferencing Operator”.

- It is a unary operator.

- It takes address as an argument.

- - returns the content/container whose address is it’s argument.

Example1:

```C
#include <stdio.h>

int main()
{
    printf("Pointer Basics\n");
    // Defining int var and poiner var
    int a = 76;
    int *ptr1 = &a;// here &x is memory location of x var in ram. it should be in hexadecimal.
    int *ptr2 = NULL;// this is null pointer, dont store any address of another var.

    // Printing Address of  var
    printf("The Address of a is %p\n", &a);
    printf("The Address of pointer is %p\n", &ptr1);
    printf("The Address of a is %p\n", ptr1);

    // Printing garbage value of var
    printf("The Address of some garbage is %p\n", &ptr2);
    printf("The Value of a is %d\n", *ptr1);
    printf("The Value of a is %d\n", a);
    return 0;
}
```
