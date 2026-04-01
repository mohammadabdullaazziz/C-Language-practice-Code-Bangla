C ল্যাঙ্গুয়েজে Arithmetic Operators বা গাণিতিক অপারেটরগুলো ব্যবহার করা হয় সাধারণ গণিতের কাজগুলো (যেমন: যোগ, বিয়োগ, গুণ, ভাগ) করার জন্য

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

#include <stdio.h>

int main() {
    int num1, num2;
  
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Output Results ---\n");
    printf("Addition      : %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction   : %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // (Division by zero check)
    if (num2 != 0) {
        printf("Division      : %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulo (%%)    : %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division/Modulo: Not possible when second number is 0\n");
    }

    return 0;
}


int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

