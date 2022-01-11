1. How #define use for dubugging?

```c
#define DEBUG
    #ifdef DEBUG
        print("statement");
    #endif 
#undef DEBUG  
```