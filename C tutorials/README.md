# C Tutorial

## configuration of C:

- [Official page of Vs code](https://code.visualstudio.com/docs/cpp/config-mingw)
- [Config of C ](https://www.youtube.com/watch?v=0HD0pqVtsmw&list=LL&index=6&t=620s)
- building a exe file (gcc file.c -o "exe filename")[]

## Commands used  for installation
- Update the package database and base packages using
```
pacman -Syu
```

- Update rest of the base packages 
```
pacman -Su
```

- Now open up the Msys MinGW terminal
To install gcc and g++ for C and C++ 
For 64 bit
```
pacman -S mingw-w64-x86_64-gcc
```
For 32 bit
```
pacman -S mingw-w64-i686-gcc
```

- To install the debugger ( gdb ) for C and C++
For 64 bit
```
pacman -S mingw-w64-x86_64-gdb
```
For 32 bit
```
pacman -S mingw-w64-i686-gdb
```

- To check
gcc version : gcc --version
g++ version : g++ --version
gdb version : gdb --version


## Snippets for C:

```Js
"format": {
    "prefix": "main2",
    "body": [
      "#include<stdio.h>",
      "int main()",
      "{",
      "\t$1",
      "\treturn 0;",
      "}"
    ],
    "description": "to print format"
  }
```

## Basic structure of C program:

- Program are divided into different part like Pre-Processor, main function, variable declaration and so on.
- we can see all processes of C program devleoping step form preprecessing, compilation, assembly to linker using following cmd: gcc -Wall -save-temps .\structure.c -o structure

1. PreProcessing - built in files.
2. compilation - transform a program written in a high-level programming language from source code into object code.
3. assembly- acctually is a low level language that complier coverted. in this convertd low level langauge to machine level langauge. means converted to binary value that can computer understand.
4. Linker- linker is get a all .O files and combine them and create a execute a file like ie. structure.exe

## tokens

- our C program are made by lot of token, tokens combine together.
- every statement termination is done by ;(semicolon)
- C have 32 general purpose [keyword](https://docs.microsoft.com/en-us/cpp/c-language/c-keywords?view=msvc-170) and they are reserverd.
- our C program is done by keyword, identifier, constant, string literal, symbol

## Variable: Rules for defining a var in C:

- variable is nothing but a name given to a memory location in ram

1. A variable can have alphabets, digits, and underscore.
2. A variable name can start with the alphabet, and underscore only. It can't start with a digit.
3. No whitespace is allowed within the variable name.
4. A variable name must not be any reserved word or keyword, e.g. int, goto , etc

## Data Types in C:

- [Data Types in C ](https://www.javatpoint.com/data-types-in-c)
- [Data Types and Size](https://drive.google.com/file/d/12Qd4LsTvjHbqOilQVjUWk7J1-oPOKyjL/view?usp=sharing)

## Operator in C:

- ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Operators-In-C.png)

## C Format Specifiers and Escape Sequences:

- [YoutubeVideo](https://www.youtube.com/watch?v=XETsCR2bXJI&list=PLu0W_9lII9aiXlHcLx-mDH1Qul38wD3aR&index=9)
- i.e printf("value of a is %6.3f and value of b is %d\n", a, b);

1. here %d is for int.
2. %f is for float.
3. %c is for character.
4. %l is for long.
5. %lf is for double.
6. %Lf is for Long Double.

- we can do specific format in float, %6.3f here format is float and total no is 6 in float value and want 3 decimal value, working left to right. if we use -ve value for total character is return from right to left i.e %-16.3f.

## Constant In C:

- we can define constant using two way 1.constant keyword 2. #define preprocessor

1. ie. const int a= 3;
2. #define a 3

