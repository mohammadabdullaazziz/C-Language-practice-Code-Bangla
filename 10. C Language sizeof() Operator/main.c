//sizeof() operator
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    float f;
    double d;
    char c;
    char name[] = "Abdullah";

    printf("Size of int: %d Bytes\n", sizeof(num));
    printf("Size of float: %d Bytes\n", sizeof(f));
    printf("Size of double: %d Bytes\n", sizeof(d));
    printf("Size of char: %d Bytes\n", sizeof(c));
    printf("Size of char: %d Bytes\n", sizeof(name));

    printf("Size of int: %zu Bytes\n", sizeof(num));
    printf("Size of float: %zu Bytes\n", sizeof(f));
    printf("Size of double: %zu Bytes\n", sizeof(d));
    printf("Size of char: %zu Bytes\n", sizeof(c));
    printf("Size of char: %zu Bytes\n", sizeof(name));
    return 0;
}