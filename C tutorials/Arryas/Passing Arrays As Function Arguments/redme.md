# Declaring Function with array as a parameter:

- Formal parameters as an unsized array

```c
void myfunc (int arr[]) {}
```

- Formal parameters as a sized array

```c
void myfunc (int arr[100]) {}
```

- Formal parameters as a two dimensional array.

```c
void myfunc (int arr [3][3]) {}
```

# Declaring function with pointer in the parameter:

When we pass the address of an array while calling a function then we are using call by reference function call. When we pass an address as an argument in the function, the pointer in the function receives the address of the array.

```c
void myfunc (int *ptr) {}
```
