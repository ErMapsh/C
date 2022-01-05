# What is Union?

- union is using for better memory management.
- Union is a user Defined data type (very similar to structures)
- the difference between structure and union lies in the fact that in structure, each member has its own storage location, whereas members of a union uses a single shared memory location.
- the single shared memory location is equal to the size of its largest data member.
- in Union at a time one member active in union.

# Declaring and accessing union members:

- Like structure we access any member by using the "member access pointer(.)" in unions.
- we use keyword [union] to define a union.
- Syntax is very similar to that of structure.

```c
   union student{
       int id[34];
       float mark[34];
       char c;
   } un;
```
