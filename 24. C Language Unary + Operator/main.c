Unary + Operator এর কাজ

Unary + কোনো সংখ্যার মান পরিবর্তন করে না।
এটা শুধু বলে যে সংখ্যাটি positive।

 
#include <stdio.h>
int main() {
 int a = 10;
 int b = +a;
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  return 0;

}

Negative Number-----------
 
#include <stdio.h>
int main() {

    int a = -20;
    int b = +a;

    printf("b = %d", b);

    return 0;
}

Expression এ ব্যবহার---------------
 
#include <stdio.h>
int main() {

    int a = 5;
    int result = +a + 10;

    printf("Result = %d", result);

    return 0;
}

C ভাষায় Unary + operator সাধারণত খুব কম ব্যবহার করা হয়, কারণ এটি সংখ্যার মান পরিবর্তন করে না।
তবে কখনো কখনো expression স্পষ্ট করার জন্য ব্যবহার করা হয়। 

#include <stdio.h>

int main() {

    int a = 10;
    int b = 5;

    int result = +a - b;

    printf("Result = %d\n", result);  ----- Result = 5
     +a = 10
     10 - 5 = 5  

    return 0;
}

Negative সংখ্যার সাথে-----------
#include <stdio.h>

int main() {

    int a = -20;

    printf("Value = %d\n", +a);  --------- printf("Value = %d\n", -a); // -(-20) = 20

    return 0;
}

Unary Plus Operator (+): সি ল্যাঙ্গুয়েজে কোনো ভেরিয়েবলের আগে + চিহ্ন দেওয়া মানে হলো Unary Plus অপারেটর ব্যবহার করা। এই অপারেটরটি কোনো সংখ্যার চিহ্নের (Sign) পরিবর্তন করে না।

যদি সংখ্যাটি পজিটিভ হয়, তবে সেটি পজিটিভই থাকে।

যদি সংখ্যাটি নেগেটিভ হয়, তবে সেটি নেগেটিভই থাকে।

#include <stdio.h>
#include <stdlib.h> // abs() Function এর জন্য এটি দরকার

int main() {
    int a = -20;
    printf("Value = %d\n", abs(a)); // আউটপুট হবে 20
    return 0;
}

Mathematical Expression Example-------
#include <stdio.h>

int main() {

    int a = 5;
    int b = 7;
    int c = 3;

    int result = +a + b + c;

    printf("Result = %d\n", result);

    return 0;
}

Unary + দিয়ে স্পষ্ট করা-----------
#include <stdio.h>

int main() {

    int x = 8;
    int y = 2;

    int result = +x * y;

    printf("Result = %d\n", result);

    return 0;
}

Unary +
✔ মান পরিবর্তন করে না
✔ শুধু positive বোঝায়
✔ expression পরিষ্কার করতে ব্যবহার করা হয়

#include <stdio.h>

int main() {

    int a = 15;

    printf("Unary + : %d\n", +a);
    printf("Unary - : %d\n", -a);

    return 0;
}
