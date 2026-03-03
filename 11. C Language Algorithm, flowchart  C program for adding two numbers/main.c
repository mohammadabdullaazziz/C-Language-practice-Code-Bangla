//Algorithm, flowchart C program for adding two numbers
#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, addition;

    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    addition = num1 + num2;
    // printf("Addition of %d and %d = %d", num1, num2, addition);
    printf("Addition of %d", addition);
    return 0;

}


#include <stdio.h>

int main()
{
   int num1, num2, addition;

   printf("Enter your First Number: ");
   scanf("%d", &num1);

   printf("Enter your second Number: ");
   scanf("%d", &num2);

   addition = num1 + num2;

   printf("\nResult: %d + %d = %d\n", num1, num2, addition);

   return 0;
}
