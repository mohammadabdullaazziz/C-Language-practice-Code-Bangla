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

সি (C) বা সি++ (C++) ল্যাঙ্গুয়েজ গাণিতিক চিহ্নের ক্ষেত্রে 
+ ও + মিলে +
+ ও - মিলে -
- ও - মিলে +


#include <stdio.h>
int main() {
    int a = 20;
    int b = -20;

    printf("%d\n", +a);  // +(20)  -> আউটপুট: 20
    printf("%d\n", +b);  // +(-20) -> আউটপুট: -20
    printf("%d\n", -b);  // -(-20) -> আউটপুট: 20 (চিহ্ন বদলে গেল)

    return 0;
}
এখানে মূলত দুটি অপারেটর কাজ করছে: Unary Plus (+) এবং Unary Minus (-)।

ভেরিয়েবল ডিক্লারেশন (Variables)
int a = 20;
int b = -20;

a এর মান একটি পজিটিভ সংখ্যা (২০)।

b এর মান একটি নেগেটিভ সংখ্যা (-২০)।



 Unary Plus (+) অপারেটরের কাজ

ইউনারি প্লাস অপারেটরটি কোনো ভেরিয়েবলের মানের কোনো পরিবর্তন করে না। এটি কেবল সংখ্যাটির বর্তমান চিহ্ন বজায় রাখে।

printf("%d\n", +a);
এখানে a এর মান ২০। তাই +a মানে হলো +(20)। প্লাসে-প্লাসে প্লাসই থাকে।

আউটপুট: 20

printf("%d\n", +b);

এখানে b এর মান -২০। তাই +b মানে হলো +(-20)। গণিতের নিয়মে প্লাসে-মাইনাসে মাইনাসই হয়। তাই এখানে মানটি -২০-ই থেকে যাবে।

আউটপুট: -20



Unary Minus (-) অপারেটরের কাজ

ইউনারি মাইনাস অপারেটরটি কোনো ভেরিয়েবলের চিহ্নকে উল্টে (Invert) দেয়। অর্থাৎ এটি মানটিকে -1 দিয়ে গুণ করার মতো কাজ করে।

printf("%d\n", -b);
এখানে b এর মান ছিল -২০। যখন আমরা এর আগে আরেকটি মাইনাস বসালাম, তখন হিসাবটি দাঁড়াল: -(-20)।
বীজগণিতের নিয়ম অনুযায়ী, মাইনাসে-মাইনাসে প্লাস হয়ে যায়।

আউটপুট: 20

১. পার্থক্য বোঝা: এই কোডটি প্রমাণ করে যে + অপারেটর কাউকে পজিটিভ বানানোর ক্ষমতা রাখে না (যেমনটি -২০ এর ক্ষেত্রে হয়েছে), সে শুধু বর্তমান অবস্থা বজায় রাখে।
অন্যদিকে - অপারেটর যেকোনো পজিটিভকে নেগেটিভ এবং নেগেটিভকে পজিটিভ বানাতে পারে।

২. স্পষ্টতা: অনেক সময় কোডে কোনো সংখ্যা যে নিশ্চিতভাবে পজিটিভ, তা জোর দিয়ে বোঝানোর জন্য ডেভেলপাররা + চিহ্ন ব্যবহার করেন, যদিও এটি না দিলেও চলত।
