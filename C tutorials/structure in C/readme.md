# what is Structure in C?

- structures are user defined data types in C.
- using structures allows us to combine data of different types together.
- it used to create complex data type which containes diverse info.
- they are very similar to array but structure can sotre data of any type, which is practically more useful.

# Defining a structure

```c
struct [structure_name]
{
  //data_type var 1
  //data_type var 2
  //data_type var 3
  //data_type var 4
 }[strcture_variables];
```

#### Example: we created new data Type.
```c
struct student{
    int id;
    int marks;
    char fav_char;
}s1, s2, s3;
```

## Accessing Structure Members
- array element are accessed using the subscript variable ie. arr[0]
- in a similar fashion. struture member are accessed are using dot [.] operator ie e1.marks= 34.23;
- [.] is called as strucutre member operator.
- to access the member of structure, we use this between "Structure name" & "member name".