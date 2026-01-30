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
   return 0;
}
