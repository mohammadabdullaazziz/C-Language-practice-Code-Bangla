#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   // char upperCaseCharacter;
   // printf("Enter any Upper-case Character: ");
   // scanf("%c", &upperCaseCharacter);
   // printf("Convert your upper Case character to lower case character in C: %c\n", upperCaseCharacter + 32);

   char upperCaseCharacter;
   printf("Enter any Upper-case Character: ");
   scanf("%c", &upperCaseCharacter);
   char lower = tolower(upperCaseCharacter);
   printf("Convert your upper Case character to lower case character in C: %c\n", lower);

   char upper = 'G';
   char lower = tolower(upper);
   printf("Lowercase: %c", lower);

   // char upper = 'B';
   // char lower = upper + 32; 
   // printf("Lowercase: %c", lower);
   return 0;
}
