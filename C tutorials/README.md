# C Tutorial 

## configuration of C:
- [Official page of Vs code](https://code.visualstudio.com/docs/cpp/config-mingw) 
- [Config of C ](https://www.youtube.com/watch?v=0HD0pqVtsmw&list=LL&index=6&t=620s)
-  building a exe file (gcc file.c -o "exe filename")[]

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
- ![Data Types](https://drive.google.com/file/d/12Qd4LsTvjHbqOilQVjUWk7J1-oPOKyjL/view?usp=sharing)