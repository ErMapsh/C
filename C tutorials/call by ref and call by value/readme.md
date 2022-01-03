# Call by Value & Call By Reference

## Call by Value

- When we call a function by value, it means that we are passing the values of the arguments which are copied into the formal parameters of the functions.
- which means the original value remain unchanged and only the parameter inside the function changes.

```C
#include<stdio.h>
void swap(int x, int y)// this are formal parameter
{
int temp;
temp=x;
x=y;
y=temp;
}
void main()
{
int r=10, v=20;
swap(r, v);  // passing value to function, this are actual parameter
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
}
```

## Call By Reference

- the call by reference method is passing agrument to a C function copies the address of the argument into the formal parmeters.
- address of the actual arguments are copied and then assigned to the corressponding formal parmeters.

```C
#include<stdio.h>
void swap(int *x, int *y)
{
int temp;
 temp=*x;
*x=*y;
*y=temp;
}
void main()
{
int r=10, v=20;
swap(&r, &v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
}
```
