C programming-এ Assignment Operator মানে হলো কোনো ভেরিয়েবলের মধ্যে মান (Value) জমা রাখা বা অ্যাসাইন করা 
Assignment Operator (=) ব্যবহার করে কোনো ভ্যারিয়েবলের মধ্যে মান রাখা হয়। 

#include <stdio.h>
int main() {
    int a;
    a = 10;   // 10 এর মান a এর মধ্যে রাখা হয়েছে।
    printf("Value of a = %d", a); 
    return 0;
}

ভ্যারিয়েবল তৈরি করার সময় মান দিলে তাকে Initialization বলে। 
int a = 10;

আগে তৈরি করা ভ্যারিয়েবলে পরে মান দিলে তাকে Assignment বলে।
int a;
a = 10; 


Assignment Operator (=) এর কাজ হলো ডান পাশের মানটিকে বাম পাশের ভেরিয়েবলে কপি করে দেওয়া। 

#include <stdio.h>
int main() {
    int num1 = 0;
    printf("%d", num1 = 5);
    int num2;
    printf("%d", num2 = 10);
    return 0;
} 

Chaining or Chained Assignment সাধারণত তখনই বলা হয় যখন আপনি একই মান একাধিক ভেরিয়েবলে একটার পর একটা সেট করেন।
C ল্যাঙ্গুয়েজে অ্যাসাইনমেন্ট অপারেটর ডান থেকে বাম দিকে (Right to Left) কাজ করে। 
int a, b, c;
a = b = c = 50;

#include <stdio.h>

int main() {
    int a, b, c;
    a = b = c = 20;
    printf("%d %d %d", a, b, c);
}

#include<stdio.h>

int main() {
   int num1 = 5, num2 = 6, num3 = 0;
   num3 = num1 + num2;
   //int num4 = 5 + num3;
   int num4 = 5 + (num3 = num1 + num2);
   printf("Result is: %d\n", num4);
   return 0;
}

#include<stdio.h>
int main() {
   int num1, num2, num3;
   num1 = 2 + 3;
   num2 = num1;
   num3 = num2;
   printf("Result is: %d\n", num3);
   return 0;
}


Compound Assignment Operators (শর্টকাট পদ্ধতি) ----
যখন কোনো ভেরিয়েবলের বর্তমান মানের সাথে কিছু যোগ, বিয়োগ বা গুণ করে আবার সেই ভেরিয়েবলেই রাখতে চাই, 
তখন এই শর্টকাটগুলো ব্যবহার করি। একে Arithmetic Assignment বলা হয়।
    
+=	যোগ করে মান রাখা	a += 5
-=	বিয়োগ করে মান রাখা	a -= 3
*=	গুণ করে মান রাখা	a *= 2
/=	ভাগ করে মান রাখা	a /= 4
%=	ভাগশেষ রাখা	a %= 3

#include <stdio.h>
int main() {
    int a = 10;
    a += 5;
    printf("Value = %d", a);
} 


#include <stdio.h>

int main() {
    int a = 20;

    a -= 4;

    printf("%d", a);
}

#include <stdio.h>

int main() {

    int a = 20;

    a += 5;
    printf("a += 5 = %d\n", a);

    a -= 3;
    printf("a -= 3 = %d\n", a);

    a *= 2;
    printf("a *= 2 = %d\n", a);

    a /= 4;
    printf("a /= 4 = %d\n", a);

    a %= 3;
    printf("a %%= 3 = %d\n", a);

    return 0;
} 

Assignment Operator Expression
#include <stdio.h>

int main() {

    int a, b;

    a = (b = 10);

    printf("a = %d b = %d", a, b);
}



int x = 10;
x += 3 * 2;

int x = 15;
x -= 5 + 2;

