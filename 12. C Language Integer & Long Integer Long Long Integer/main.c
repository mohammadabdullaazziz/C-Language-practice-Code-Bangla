
#include <stdio.h>
#include <limits.h>
int main() {

    /* 
    int num1; 
    int num2;
    num1 = 10, num2 = 3;
    printf("Result is: %d", num1 + num2); output: 13
    printf("Result is: %d", num1 / num2); output: 3;
    printf("Result is: %d", num1 / num2); output: 1;
    */

    /*
    int a;
    a = 2147483647;
    long long int b = 2147483648;
    printf("Value is a: %d\n", a);
    printf("Value is b: %lld\n", b);
    */
    
    printf("The Maximum value of INT = %d\n", INT_MAX);
    printf("The Minimum value of INT = %d\n", INT_MIN);

    printf("The Maximum value of LONG INT= %ld\n", LONG_MAX);
    printf("The Minimum value of LONG INT= %ld\n", LONG_MIN);

    printf("The Maximum value of LONG LONG INT= %lld\n", LLONG_MIN);
    printf("The Minimum value of LONG LONG INT= %lld\n", LLONG_MIN);
    return 0;
}