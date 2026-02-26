#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int result;
    int isTrue = 1; // 1 is true

    printf("Initial Value: a = %d, b = %d\n\n", a, b);

    result = -a;
    printf("Unary Minus of a    : %d\n", result);

    a++; 
    printf("After Increment a++ : %d\n", a);

 
    b--; 
    printf("After Decrement b-- : %d\n", b);

    // ৪. Logical NOT (!) 
    printf("Logical NOT of isTrue: %d\n", !isTrue); // ১ থাকলে ০ দেখাবে

    // ৫. Sizeof Operator : variable Bytes
    printf("Size of int a       : %zu bytes\n", sizeof(a));

    return 0;
}