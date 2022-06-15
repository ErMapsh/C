## in pointer arithmetic:

- the pointer store the value of array address, meanwhile the first block address.
- array is depend on his data type is defined.
- every memory location in the array give a value if its defined.
- and increment is defined on data type.

## formulea:

```
int mark[] = {2, 3 ,5, 10};
/* so here in pointer we can assign/store directly a mark array as address pointer
pointer store array first index address
if we increment a pointer there we can access each index with his base address and his 
value */

int *baseAddress = mark;
cout<<*(baseAddress + 1);// that will give u address of 1st index and so on.
// formulae : baseAddress + i  = baseAddress + i * sizeof(datatype)
```
