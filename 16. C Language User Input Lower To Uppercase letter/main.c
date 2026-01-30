#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   // char lowerCharacter;
   // printf("Enter any Lower-case Character: ");
   // scanf("%c", &lowerCharacter);
   // printf("Convert your lowercase character to uppercase character in C: %c\n", lowerCharacter - 32);
   
   char lower;
   printf("Enter any Lower-case Character: ");
   scanf("%c", &lower);
   char upper = toupper(lower);
   printf("Convert your lowercase character to uppercase character in C: %c\n", upper);

   // char lower = 'z';
   // char upper = lower - 32;
   // printf("Upper Case: %c", upper);

   char lower = 'm';
   char upper = toupper(lower);
   printf("Upper Case: %c", upper);
   return 0;
   
}

