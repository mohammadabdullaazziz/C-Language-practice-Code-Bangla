
/*Types of Data Types

1. Basic Data Type

int,
float, double, char

2. Derived Data Type

Array, Pointer, Structure, Union

3. Enumeration Data Type

4. Void Data Type*/

#include <stdio.h>
int main() {
    // Create variables
    int num1 = 5; // Integer (whole number)
    int num2 = 10;
    float myFloatNum = 5.99; // Floating point number
    double balance = 52.125487;
    char myLetter = 'D';     // Character
    printf("Number are %d, %d\n", num1, num2);
    printf("Balance is: %.2lf\n", balance);
    // Print variables
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char name [] = "Mohammad";
    int age = 25;
    strcpy(name, "Abdullah");
    age = 30;
    float height = 5.2;
    char village [] = "Changmary";
    char subject [] = "Programming";
    char gread = 'A';
    int num1, num2;
    num1 = 20, num2 = 30;
    printf("My name is: %s\n", name);
    printf("My age is: %d\n", age);
    printf("My height is: %.1f\n", height);
    printf("My village is: %s\n", village);
    printf("My subject is: %s\n", subject);
    printf("My gread is: %c\n", gread);
    printf("Num1 is = %d And Num2 is = %d\n", num1, num2);
    return 0;
}
*/
