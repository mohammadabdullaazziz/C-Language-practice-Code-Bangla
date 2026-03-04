
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {

    /* 
    int num1; 
    int num2;
    num1 = 10, num2 = 3;
    printf("Result is: %d", num1 + num2); output: 13
    printf("Result is: %d", num1 / num2); output: 3;
    printf("Result is: %d", num1 % num2); output: 1;
    */

    /*
    int a;
    a = 2147483647;
    long long int b = 2147483648;
    printf("Value is a: %d\n", a);
    printf("Value is b: %lld\n", b);
    */
    
   

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer Types
    printf("The Maximum value of INT = %d\n", INT_MAX);      2,147,483,647 
    printf("The Minimum value of INT = %d\n", INT_MIN);      -2,147,483,648
    printf("------------------------------------------\n");

    printf("The Maximum value of LONG INT = %ld\n", LONG_MAX);  9,223,372,036,854,775,807
    printf("The Minimum value of LONG INT = %ld\n", LONG_MIN);  -9,223,372,036,854,775,808
    printf("------------------------------------------\n");

    printf("The Maximum value of SHORT = %d\n", SHRT_MAX);     
    printf("The Minimum value of SHORT = %d\n", SHRT_MIN);

    যেহেতু short ১৬-বিটের, তাই এর রেঞ্জ হিসাব করা হয় এভাবে:
    সর্বনিম্ন (Minimum): $-2^{15}$
    সর্বোচ্চ (Maximum): $2^{15} - 1$
    ভেরিয়েবলের মান কখনো ৩২,০০০ পার হবে না (যেমন: মানুষের বয়স বা রোল নম্বর), তখন মেমোরি বাঁচানোর জন্য int এর বদলে short ব্যবহার করা বুদ্ধিমানের কাজ।
    printf("------------------------------------------\n");

    printf("The Maximum value of CHAR = %d\n", CHAR_MAX);
    printf("The Minimum value of CHAR = %d\n", CHAR_MIN);
    printf("------------------------------------------\n");

    // Long Long Int 
    printf("The Maximum value of LONG LONG INT = %lld\n", LLONG_MAX);
    printf("The Minimum value of LONG LONG INT = %lld\n", LLONG_MIN);
    printf("------------------------------------------\n");

    // Floating Point Types
    printf("The Maximum value of FLOAT = %e\n", FLT_MAX);
    printf("The Minimum value of FLOAT = %e\n", FLT_MIN);
    printf("------------------------------------------\n");

    printf("The Maximum value of DOUBLE = %e\n", DBL_MAX);
    printf("The Minimum value of DOUBLE = %e\n", DBL_MIN);

    return 0;
}

C ল্যাঙ্গুয়েজে int, long int, এবং long long int মূলত পূর্ণসংখ্যা (Integer) জমা রাখার জন্য ব্যবহৃত হয়। 
এদের মধ্যে প্রধান পার্থক্য হলো এরা মেমোরিতে কতটুকু জায়গা (Bytes) নেয় এবং কত বড় সংখ্যা জমা রাখতে পারে।

১. int (Integer)এটি সাধারণ পূর্ণসংখ্যা রাখার জন্য সবচেয়ে বেশি ব্যবহৃত হয়।সাইজ: সাধারণত ৪ বাইট (৩২ বিট)।
রেঞ্জ: $-2,147,483,648$ থেকে $+2,147,483,647$ পর্যন্ত।
ব্যবহার: যখন আপনি নিশ্চিত যে সংখ্যাটি ২১০ কোটির বেশি হবে না।

২. long int (বা শুধু long)
এটি বড় পূর্ণসংখ্যা রাখার জন্য ব্যবহৃত হয়। তবে মজার ব্যাপার হলো, অনেক আধুনিক সিস্টেমে (যেমন Windows) int এবং long এর সাইজ একই (৪ বাইট)। 
কিন্তু কিছু সিস্টেমে (যেমন ৬৪-বিট Linux) এটি ৮ বাইট হতে পারে।

সাইজ: কমপক্ষে ৪ বাইট।
ফরম্যাট স্পেসিফায়ার: %ld

long int এর রেঞ্জ মূলত  সিস্টেমের আর্কিটেকচার (৩২-বিট নাকি ৬৪-বিট) এবং অপারেটিং সিস্টেমের ওপর নির্ভর করে।
৩২-বিট সিস্টেম (বা Windows ৬৪-বিট)উইন্ডোজ অপারেটিং সিস্টেমে int এবং long সাধারণত একই থাকে।
সাইজ: ৪ বাইট (৩২ বিট)
সর্বনিম্ন: $-2,147,483,648$
সর্বোচ্চ: $+2,147,483,647$

৬৪-বিট সিস্টেম (যেমন Linux/macOS)এই সিস্টেমগুলোতে long ডাটা টাইপটি ৮ বাইট জায়গা নেয়।
সাইজ: ৮ বাইট (৬৪ বিট)সর্বনিম্ন: $-9,223,372,036,854,775,808$
সর্বোচ্চ: $+9,223,372,036,854,775,807$

#include <stdio.h>

int main() {
    int age = 25;                       // ছোট সংখ্যা
    long int salary = 150000L;          // একটু বড় সংখ্যা
    long long int world_pop = 8000000000LL; // অনেক বড় সংখ্যা

    printf("Age: %d\n", age);
    printf("Salary: %ld\n", salary);
    printf("World Population: %lld\n", world_pop);

    return 0;
}

long int লেখার সময় সংখ্যার শেষে L এবং long long এর শেষে LL লেখা একটি ভালো প্র্যাকটিস, যাতে কম্পাইলার বুঝতে পারে এটি বড় সংখ্যা।
যদি মেমোরি বাঁচানোর চিন্তা না থাকে এবং অনেক বড় সংখ্যা নিয়ে কাজ করতে হয়, তবে চোখ বন্ধ করে long long int ব্যবহার করতে পারি।

৩. long long intযখন আপনার অনেক বড় সংখ্যার প্রয়োজন হয় (যেমন বিশ্ব জনসংখ্যা বা বড় কোনো হিসাব), তখন এটি ব্যবহার করা হয়।
সাইজ: সবসময় ৮ বাইট (৬৪ বিট)।
রেঞ্জ: অনেক বড়! প্রায় $-9 \times 10^{18}$ থেকে $+9 \times 10^{18}$ পর্যন্ত।
ফরম্যাট স্পেসিফায়ার: %lld
