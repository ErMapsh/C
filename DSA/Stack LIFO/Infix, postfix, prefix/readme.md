# Infix:  <operand> <operator> <operand> ie. a+b 

# Postfix: <operator> <operand> <operand> ie. +ab, *ab

# Prefix: <operand><operand> <operator> ie. ab-, pq-


but more complicated:

Infix : a*(b+c)*d
prefix: a* (+bc *d)
        (a* *+bcd)
        *a*+bcd
postfix:a* (b+c) *d
        (a* bc+) *d
        abc+* * d
        abc+*d*
           
