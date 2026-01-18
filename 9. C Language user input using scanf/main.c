// user input
#include <stdio.h>

int main()
{    
    //int num;
    // printf("Enter an integer: ");
    // scanf("%d", &num);
    // printf("%d\n", num);
  //------------------------------------
    // int num1, num2;
    // printf("Enter first integer: ");
    // scanf("%d", &num1);
    // printf("Enter second integer: ");
    // scanf("%d", &num2);

    // printf("Numbers are:\n%d\n%d", num1, num2);
    // printf("%d\n%d", num1, num2);
  //--------------------------------------------
    // int num1, num2;
    // printf("Enter two integer: ");
    // scanf("%d %d", &num1, &num2);
    // printf("Numbers are: \n%d\n%d", num1, num2);
    //---------------------------------------------
    int age;
    float height;
    printf("Enter your age and height: ");
    scanf("%d %f", &age, &height);
    printf("Your age: %d and\nyour height: %.1f", age, height);
    return 0;
}
