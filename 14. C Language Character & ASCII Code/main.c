#include <stdio.h>
#include <string.h>
#include <limits.h>
   int main() {
   char myChar;
   myChar = 'k'; //printf("Result is: %d\n", myChar); output 107;
   myChar = '3';
   printf("Result is: %c\n", myChar); //result is: 3;
   
   char first = 'A', second = 'b', third = 'c';
   printf("Result is: \n%c %c %c\n", first, second, third); 

   int num = 65;
   printf("Ascii Value is: %d\n", num);
   printf("Ascii Value is: %c\n", num);
   
   int num2 = 66;
   printf("Ascii Value is: %d\n", num2);
   printf("Ascii Value is: %c\n", num2);

   char ch = 'a';
   printf("Character: %c\n", ch);
   printf("ASCII value: %d\n", ch);

   char ch2 = '5';
   printf("Character: %c\n", ch2);
   printf("ASCII value: %d\n", ch2);

   char ch3 = '$';
   printf("Character: %c\n", ch3);
   printf("ASCII value: %d\n", ch3);

   char ch4 = ' ';
   printf("Character: %c\n", ch4);
   printf("ASCII value: %d\n", ch4);

   return 0;
}


#include <stdio.h>

int main() {
    // ১. ক্যারেক্টার এবং তার মান বোঝা
    char myChar = 'k';
    printf("--- Character Basic ---\n");
    printf("Value as Char: %c, Value as Int (ASCII): %d\n\n", myChar, myChar);

    // ২. মাল্টিপল ক্যারেক্টার একসাথে প্রিন্ট
    char first = 'A', second = 'b', third = 'c';
    printf("Multiple Chars: %c | %c | %c\n\n", first, second, second);

    // ৩. সংখ্যা থেকে ক্যারেক্টারে রূপান্তর (ASCII Mapping)
    int num1 = 65, num2 = 66;
    printf("--- Integer to ASCII ---\n");
    printf("Num: %d -> Char: %c\n", num1, num1); // A
    printf("Num: %d -> Char: %c\n\n", num2, num2); // B

    // ৪. বিভিন্ন ধরনের ক্যারেক্টার এবং তাদের ASCII ভ্যালু (একসাথে লুপের মতো সাজানো)
    printf("--- ASCII Table Check ---\n");
    printf("Char: 'a'  | ASCII: %d\n", 'a');
    printf("Char: '5'  | ASCII: %d\n", '5');
    printf("Char: '$'  | ASCII: %d\n", '$');
    printf("Char: ' '  | ASCII: (Space) %d\n", ' ');

    return 0;
}
