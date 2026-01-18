#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mohammad";
    strcpy(name, "Abdullah\n");
    printf("My name is: %s", name);

    float age = 29.6;
    printf("My age is: %f\n", age);
    int salary = 10000;
    printf("My Salary is: %d\n", salary);
    int num1, num2;
    num1 = num2 = 40;
    printf("My First Number: %d\n", num1);
    printf("My Second Number: %d\n", num2);
    char grade = 'A';
    printf(grade);
    return 0;
}

//int num3, num4;
//int num3 = 50, num4 = 60;
