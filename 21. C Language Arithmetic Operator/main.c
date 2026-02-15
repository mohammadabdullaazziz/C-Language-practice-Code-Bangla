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

