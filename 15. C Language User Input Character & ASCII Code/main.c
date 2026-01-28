#include <stdio.h>
#include <string.h>
#include <limits.h>
   int main() {
   char character;
   printf("Enter a character: ");
   scanf(" %c", &character);
   printf("Your character: %c\n", character);
   printf("ASCII value: %d\n", character);

   char character2;
   printf("Enter a digit character: ");
   scanf(" %c", &character2);
   printf("You entered: %c\n", character2);
   printf("ASCII value: %d\n", character2);

   char character3;
   printf("Enter a special character: ");
   scanf(" %c", &character3);
   printf("Character: %c\n", character3);
   printf("ASCII value: %d\n", character3);

   char ch1, ch2;
   printf("Enter first character: ");
   scanf(" %c", &ch1); //"%c" (with space) used

   printf("Enter second character: ");
   scanf(" %c", &ch2); //"%c"(with space)used

   printf("ASCII of %c = %d\n", ch1, ch1);
   printf("ASCII of %c = %d\n", ch2, ch2);

   return 0;
}
