# Structure of C

## cmd for creating exe file
```
    gcc file.c -o [file.exe(by user) or default a.exe]
```

## What happen when we compile a .c file, lets see this using following cmd:
```
    gcc -wall -save-temps file.c -o [file.exe(by user) or default a.exe]
```

## Process of compilation
1. remove comment, expand micros, content of preprocessor file make together in one file and save it
2.