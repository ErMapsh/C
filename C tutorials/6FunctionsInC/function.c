/*Functions are used to divide a large C program into smaller pieces.
Function can be called multiple or several times to provide reusability and modularity to the C program.
Functions are also called as procedure or subroutines.
It is a piece of code to accomplish certain operation.*/

/*
syntax of Functions in C:
return_type function_name(data_type parameter 1, data_type parameter 2..)
*/

/*
Function Aspects :
There are 3 aspects of function :-
1.Declaration
2.Definition
3.Call

A function is declared to tell the compiler about its existence.
A function is defined to get some task done. (It means when we define function we write whole code of that function. In this actual implementation of function is done.)
A function is called in order to be used.
*/

/*
Types of Functions :
1.Library Functions – These are pre-defined functions in C Language. These are the functions which are included in C header files.
E.g. printf(), scanf() etc.

2.User defined Functions – Functions created by programmer to reduce complexity of a program i.e. these are the functions which are created by user or programmer.
*/

/*
Ways to define a Function :
There are 4 ways in which we can define any C Function and these are :

Without arguments and without return value.
Without arguments and with return value.
With arguments and without return value.
With arguments and with return value.
--when dont want to return anything that time we use void type--
*/
#include <stdio.h>

// declare the function if u want to write function after main
int sum();
void printstar();
void hello();

int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 3;
    b = 4;
    c = sum(a, b);
    printf("The sum is %d\n", c);

    printstar(4);
    return 0;
}

// when we want return value
int sum(int a, int b)
{
    return a + b;
}


//when we dont want return value
void printstar(int n)
{
    int i = 0;
    while (i < n){
        printf("%c\n", '*');
        i++;
    }
}

void hello(){
    printf("hello world");
}