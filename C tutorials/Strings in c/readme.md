# String in C:-

- String is an array of characters. Data of the same type are stored in an array for example, Integers can be stored in an integer array, similarly, a group of characters can be stored in a character array. Character arrays are also called strings. A string is a one-dimensional array of characters that is terminated by a null (‘\0’).

## Declaration of strings:

Declaring a string is very simple, same as declaring a one-dimensional array. Below is the syntax for declaring a string.

```c
char string_name[size];
```

In the above syntax, string_name is any name given to the string variable, and size is used to define the length of the string, i.e the number of characters that the strings will store. Keep in mind that there is an extra terminating character which is the null character (‘\0’) that is used to indicate the termination of string.

```c
char name[ ] = { 'M', 'A', 'P', 'S', 'H', '\0' };
```

Each character in the array, like “H”, occupies one byte of memory and the last character is always ‘\0’. The null character ‘\0’ looks like two characters, but it is actually only one character, with the \ indicating that what follows it is something special. Character array elements are stored in contiguous memory locations.
Equally we can make the string by assigning character values to each member.

```c
name[0]='M';
name[1]='A';
name[2]='P';
name[3]='S';
name[4]='H';
name[5]='\0';
```

The placeholder for string variables is %s.

##### Note: There is difference between ‘\0’ and ‘0’. The ASCII value of ‘\0’ is 0, and for ‘0’, the value is 48. The terminating null ‘\0’ and ‘0’ are not same.

The null (‘\0’) is important in C programming because it is the only way the functions that work with a string can know where the string ends. When a string not terminated by a ‘\0’, then it is not really a string but merely a collection of characters.

we need extra character null to tell the compliler that the string is end here.
so string length become (string_length+1)

# Creating String in C:

1. char Name[] = "Mapsh";
   compiler know that is string, beacause of double quotes ("") and he add automatically null character its end
2. char Name[] = {'M', 'a', 'p', 's', 'h', '%0'};
   here every char is indiviual in single quote, and compiler know this char beacause of single quotes('') so he know he need null character to end, so compiler can terminated the string and can he say this is a string.

## Taking input from user

while taking input from user, we use gets() method from stdio.h lib

```c
char str[52];
printf("Enter the string:");
gets(str);
printf("%s",str);
puts(str);
```
