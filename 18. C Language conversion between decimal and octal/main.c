#include <stdio.h>
#include <string.h>
int main()
{
  //User input Decimal → Octal

  /*
  int number; 
  printf("Enter a decimal number: ");
  scanf("%d", &number);
  printf("Octal value: %o", number);
  */

  int x;
  printf("Enter a decimal number: ");
  scanf("%d", &x);

  printf("Decimal: %d\n", x);
  printf("Octal: %o\n", x);

  //Octal → Decimal

  /*
  int num = 012;
  printf("Decimal: %d\n", num);
  printf("Octal: %o\n", num);
  */

  /*
  int x;
  printf("Enter an octal number: ");
  scanf("%o", &x);

  printf("You entered (Octal): %o", x);
  */

  int x;
  printf("Enter an octal number: ");
  scanf("%o", &x);
  printf("Decimal value: %d", x);

  int x;
  printf("Enter a octal number: ");
  scanf("%o", &x);

  printf("Octal: %o\n", x);
  printf("Decimal: %d\n", x);

  return 0;
}

//User input Octal 012
/*
int x;
scanf("%o", &x);
printf("Decimal: %d", x); Output: 10
*/

//User input Octal(077)
/*
int x;
scanf("%o", &x);
printf("Decimal: %d", x); Output: 63
*/

//Decimal input
/*
int x;
scanf("%d", &x);
printf("Decimal: %d\n", x);
printf("Octal: %o\n", x);
👉 Octal output  : 31
*/

//User input Decimal + Octal
/*
int d, o;

printf("Enter a decimal number: ");
scanf("%d", &d);

printf("Enter an octal number: ");
scanf("%o", &o);

printf("Decimal input = %d\n", d);
printf("Octal input (decimal value) = %d\n", o);
*/