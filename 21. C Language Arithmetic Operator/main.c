/*

Arithmetic Operators
+ addition or unary plus 
- subtraction or unary minus 
* multiplication 
/ division 
% remainder after division(modulo division)

*/

#include <stdio.h>
#include <string.h>
int main()
{
  int a = 9, b = 4, c;

  c = a + b;
  printf("a+b = %d \n", c);
  c = a - b;
  printf("a-b = %d \n", c);
  c = a * b;
  printf("a*b = %d \n", c);
  c = a / b;
  printf("a/b = %d \n", c);
  c = a % b;
  printf("Remainder when a divided by b = %d \n", c);
  return 0;
}



#include <stdio.h>

int main()
{
    int num1, num2, sum;
    double average; 

    printf("Enter first number : ");
    scanf("%d", &num1); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

   //(Type Casting)
    average = (double)sum / 2;

    printf("\n--- Result ---\n");
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Average: %.2lf\n", average);

    return 0;
}

