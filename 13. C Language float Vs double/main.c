
//float Data Types
#include <stdio.h>
#include <strings.h>
   int main() {
   float a = 123.123456789;

   printf("float value = %.9f\n", a); //wrong output: 123.123458862;
   return 0;
}

//double Data Types
#include <stdio.h>

int main()
{
   double b = 123.123456789123456;

   printf("double value = %.15lf\n", b); //wrong output: 123.123456789123450
   return 0;
}

//right output

/*
//float Data Types
#include <stdio.h>
#include <strings.h>
   int main() {
   float a = 123.123456789;

   printf("float value = %.5f\n", a);
   return 0;
}

//double Data Types
#include <stdio.h>

int main()
{
   double b = 123.123456789123456;

   printf("double value = %.9lf\n", b);
   return 0;
}
*/