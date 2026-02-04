#include <stdio.h>
#include <string.h>
int main()
{
  //User input Decimal → Hexadecimal
  
  int x;
  printf("Enter a decimal number: ");
  scanf("%d", &x);

  printf("Hexadecimal value: %X", x);


  //Decimal input

  /*
  int x;
  scanf("%d", &x);

  printf("Decimal: %d\n", x);
  printf("Hexadecimal: %x\n", x)
  */

  //User input Hexadecimal  Decimal
  /*
  int x;
  printf("Enter a hexadecimal number: ");
  scanf("%x", &x);

  printf("Decimal value: %d", x);
  */

  //Capital Hex input
/*
  int x;
  scanf("%X", &x);
  printf("Decimal: %d", x);Input: FF Output : 255 
  */

  //Decimal ↔ Hexadecimal
  /*
  int x;
  printf("Enter decimal number: ");
  scanf("%d", &x);

  printf("Hexadecimal: %X\n", x);

  int x;
  printf("Enter hexadecimal number: ");
  scanf("%x", &x);

  printf("Decimal: %d\n", x);
  */

  //Fixed Hexadecimal value
  /*
  int x = 0x1A;
  printf("Decimal: %d", x);
  */
  return 0;
}

  