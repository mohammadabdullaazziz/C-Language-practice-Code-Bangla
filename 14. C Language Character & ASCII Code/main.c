ASCII এর পূর্ণরূপ হলো American Standard Code for Information Interchange। এটি একটি ৭-বিটের কোডিং সিস্টেম (তবে কম্পিউটারে ৮-বিট হিসেবে ব্যবহৃত হয়), 
যা মোট ১২৮টি (০ থেকে ১২৭) নির্দিষ্ট চিহ্নকে রিপ্রেজেন্ট করে।

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
    char ch = 'A';
    printf("The ASCII value of %c is %d\n", ch, ch); 
    // %c দিলে অক্ষর দেখাবে, %d দিলে ওই অক্ষরের সংখ্যা (ASCII code\ value) দেখাবে
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

A - Z (Capital Letters)	65 - 90
a - z (Small Letters)	97 - 122
0 - 9 (Digits)	48 - 57
Space (ফাঁকা জায়গা)	32
New Line (\n)	10

Null (\0)	0	স্ট্রিং শেষ বোঝাতে ব্যবহৃত হয় (খুবই গুরুত্বপূর্ণ)
Tab (\t)	9	বড় ফাঁকা জায়গা (Horizontal Tab) দিতে
Backspace (\b)	8	এক ঘর পেছনে সরতে
Escape (ESC)	27	কোনো কমান্ড বাতিল বা মেনু থেকে বের হতে 

Special Symbols (Part 1)	 33 - 47
(যেমন: ! " # $ % & ' ( ) * + , - . / )	
Special Symbols (Part 2)	 58 - 64
(যেমন: : ; < = > ? @ )	
Special Symbols (Part 3)	 91 - 96
(যেমন: [ \ ] ^ _ ` )	
Special Symbols (Part 4)	 123 - 126 

+ (Plus)	      43
- (Minus)	   45
* (Asterisk)	42
/ (Slash)	   47
= (Equal)	   61 

#include <stdio.h>
int main() {
    char myChar = '=';
    printf("The ASCII value of %c is %d", myChar, myChar);
    return 0;
}
