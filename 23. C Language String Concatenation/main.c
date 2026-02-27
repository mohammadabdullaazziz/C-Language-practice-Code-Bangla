#include <stdio.h>
#include <string.h>
int main()
{
   // char firstName[30] = "Mohammad ";
   // char lastName[] = "Abdullah";
   // strcat(firstName, lastName);
   // printf("Name : %s\n", firstName);

   char firstName[30] = "Mohammad";
   char lastName[] = "Abdullah";
   strcat(firstName, " ");
   strcat(firstName, lastName);
   printf("Name : %s\n", firstName);
   return 0;
}