সি প্রোগ্রামিংয়ে (C Language) Comparison Operators বা Relational Operators ব্যবহার করা হয় দুটি ভেরিয়েবল বা মানের মধ্যে তুলনা করার জন্য। 
এই অপারেটরগুলোর ফলাফল সবসময় হয় সত্য (true, যা সাধারণত ১ হিসেবে ধরা হয়) অথবা মিথ্যা (false, যা ০ হিসেবে ধরা হয়)।

> Greater thanবামের মান ডানের চেয়ে বড় কিনা চেক করে। (10 > 5) -> True (1)
< Less thanবামের মান ডানের চেয়ে ছোট কিনা চেক করে। (3 < 5) -> True (1)
>= Greater than or equal toবড় বা সমান কিনা চেক করে। (5 >= 5) -> True (1)
<= Less than or equal toছোট বা সমান কিনা চেক করে। (3 <= 5) -> True (1)
== Equal to দুটি মান সমান কিনা চেক করে। (5 == 5) -> True (1)
!= Not equal to দুটি মান সমান নয় কিনা চেক করে। (5 != 3) -> True (1)

#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    printf("a == b : %d\n", a == b); // 0 (False)
    printf("a != b : %d\n", a != b); // 1 (True)
    printf("a > b  : %d\n", a > b);  // 0 (False)
    printf("a < b  : %d\n", a < b);  // 1 (True)
    printf("a >= 10: %d\n", a >= 10);// 1 (True)
    printf("b <= 15: %d\n", b <= 15);// 0 (False)
    return 0;
}


#include <stdio.h>
int main() {
    int x = 10;
    int y = 20;
    printf("x == y: %d\n", x == y); // আউটপুট  0
    printf("x != y: %d\n", x != y); // আউটপুট  1
    printf("x < y : %d\n", x < y);  // আউটপুট  1
    printf("x > y : %d\n", x > y);  // আউটপুট  0

    // if statement এ ব্যবহার
    if (x < y) {
        printf("x ছোট এবং y বড়।\n");
    }

    return 0;
}


বড় (>) - Greater than
বাম পাশের ভ্যালু ডান পাশের চেয়ে বড় কি না তা চেক করে।
উদাহরণ: 10 > 5 এর ফলাফল হবে 1 (True)।

ছোট (<) - Less than
বাম পাশের ভ্যালু ডান পাশের চেয়ে ছোট কি না তা চেক করে।
উদাহরণ: 2 < 8 এর ফলাফল হবে 1 (True)।

বড় অথবা সমান (>=) - Greater than or equal to
বাম পাশের ভ্যালু বড় অথবা সমান কি না তা চেক করে।
উদাহরণ: 5 >= 5 হবে True আবার 6 >= 5-ও হবে True।

ছোট অথবা সমান (<=) - Less than or equal to
বাম পাশের ভ্যালু ছোট অথবা সমান কি না তা চেক করে।
উদাহরণ: 4 <= 7 হবে True।

সমান সমান (==) - Equal to
এটি চেক করে যে বাম পাশের ভ্যালু এবং ডান পাশের ভ্যালু সমান কি না।
উদাহরণ: 5 == 5 এর ফলাফল হবে 1 (True)।
সতর্কতা: গণিতে = ব্যবহার করা হয় , কিন্তু সি ল্যাঙ্গুয়েজে একটি = মানে হলো মান সেট করা (Assignment)। তুলনা করতে সবসময় ডাবল == ব্যবহার করতে হয়।

সমান নয় (!=) - Not equal to
এটি চেক করে যে দুটি ভ্যালু একে অপরের চেয়ে আলাদা কি না।
উদাহরণ: 5 != 3 এর ফলাফল হবে 1 (True)। কারণ ৫ এবং ৩ সমান নয়।

সমান কি না তা যাচাই করা (== এবং !=)
  
#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 10;
    printf("Is a equal to c? (10 == 10): %d\n", a == c);    // আউটপুট: 1
    printf("Is a equal to b? (10 == 20): %d\n", a == b);    // আউটপুট: 0
    printf("Is a not equal to b? (10 != 20): %d\n", a != b); // আউটপুট: 1
    return 0;
}

বড় না ছোট তা যাচাই করা (> এবং <)

#include <stdio.h>
int main() {
    int x = 50, y = 30;
    printf("Is x greater than y? (50 > 30): %d\n", x > y); // আউটপুট: 1
    printf("Is x less than y? (50 < 30): %d\n", x < y);    // আউটপুট: 0
    return 0;
}

বড়-সমান বা ছোট-সমান কি না (>= এবং <=)

#include <stdio.h>
int main() {
    int limit = 100;
    int value1 = 100, value2 = 120;
    printf("Is value1 <= limit? (100 <= 100): %d\n", value1 <= limit); // আউটপুট: 1
    printf("Is value2 <= limit? (120 <= 100): %d\n", value2 <= limit); // আউটপুট: 0
    printf("Is value2 >= 150? (120 >= 150): %d\n", value2 >= 150);     // আউটপুট: 0
    return 0;
}


ভেরিয়েবলের মধ্যে ফলাফল জমা রাখাঃ

#include <stdio.h>
int main() {
    int p = 15, q = 25;
    int result = (p < q); // p ছোট তাই এখানে 1 জমা হবে
    printf("The result of (p < q) is: %d\n", result);
    return 0;
}

গাণিতিক অপারেশনে Comparison Operatorsঃ

#include <stdio.h>
int main() {
    int score = 40;
    int bonus = (score > 30) * 10; // যদি score ৩০ এর বেশি হয় তবে (1 * 10) = 10 হবে
    printf("Your bonus is: %d\n", bonus); // আউটপুট: 10
    return 0;
}

১ (True): যখন আপনার তুলনাটি সঠিক হয়।

০ (False): যখন আপনার তুলনাটি ভুল হয়।

User Input Exampleঃ

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    return 0;
}





Greater Than (>)ঃ

#include <stdio.h>
int main() {
    int a = 15, b = 10;
    printf("a > b : %d\n", a > b);
    return 0;
}


Less Than (<)

#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("a < b : %d\n", a < b);
    return 0;
}


Greater or Equal (>=)

#include <stdio.h>
int main() {
    int a = 10, b = 10;
    printf("a >= b : %d\n", a >= b);
    return 0;
}


Less or Equal (<=)

#include <stdio.h>
int main() {
    int a = 8, b = 10;
    printf("a <= b : %d\n", a <= b);
    return 0;
}


Equal (==)

#include <stdio.h>
int main() {
    int a = 10, b = 10;
    printf("a == b : %d\n", a == b);
    return 0;
}


Not Equal (!=)

#include <stdio.h>
int main() {
    int a = 10, b = 5;
    printf("a != b : %d\n", a != b);
    return 0;
}
