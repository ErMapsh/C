#include <stdio.h>

// here we use typedef syntax, we saying here "struct student" having another name "std" . 
// using typedef is become convenience for programmer

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[54];
} std;

int main()
{
    /*
    typedef unsigned long ul;
    typedef int integer;

    integer a = 3;
    integer b = 31;
    ul l1 = 3;
    */

    // directly using user defined function
    struct student ermapsh;
    ermapsh.id = 3;
    ermapsh.marks = 100;
    ermapsh.fav_char = 'p';    


    // using typedef
    std mapsh;
    mapsh.id = 13;
    mapsh.marks = 1010;
    mapsh.fav_char = 'p';

    return 0;
}