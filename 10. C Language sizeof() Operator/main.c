//sizeof() operator
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    float f;
    double d;
    char c;
    char name[] = "Abdullah";

    printf("Size of int: %d Bytes\n", sizeof(num));
    printf("Size of float: %d Bytes\n", sizeof(f));
    printf("Size of double: %d Bytes\n", sizeof(d));
    printf("Size of char: %d Bytes\n", sizeof(c));
    printf("Size of char: %d Bytes\n", sizeof(name));



১. অক্ষরের সংখ্যা (Characters)
"Abdullah" শব্দটিতে মোট ৮টি অক্ষর আছে (A-b-d-u-l-l-a-h)। প্রতিটি char মেমোরিতে ১ বাইট করে জায়গা নেয়। সেই হিসেবে ৮টি অক্ষরের জন্য দরকার ৮ বাইট।
        
২. নাল ক্যারেক্টার (Null Character - \0)
এটিই হলো আসল কারণ। সি ল্যাঙ্গুয়েজে যখনই কোনো স্ট্রিং লেখা হয়, কম্পাইলার নিজে থেকে সেই স্ট্রিংয়ের একদম শেষে একটি অদৃশ্য ক্যারেক্টার যোগ করে দেয়, যাকে বলা হয় Null Character (\0)।

এটি স্ট্রিংয়ের সমাপ্তি বা শেষ সীমানা নির্দেশ করে।

এই \0 মেমোরিতে আরও ১ বাইট জায়গা দখল করে।

    printf("Size of int: %zu Bytes\n", sizeof(num));
    printf("Size of float: %zu Bytes\n", sizeof(f));
    printf("Size of double: %zu Bytes\n", sizeof(d));
    printf("Size of char: %zu Bytes\n", sizeof(c));
    printf("Size of char: %zu Bytes\n", sizeof(name));
    return 0;

}

   printf("Size of Int: %zu bites\n", sizeof(int));
   printf("Size of Long: %zu bites\n", sizeof(long));
   printf("Size of Float: %zu bites\n", sizeof(float));
   printf("Size of double: %zu bites\n", sizeof(double));
   printf("Size of Char: %zu bites\n", sizeof(char));
   printf("Size of Long Long: %zu bites\n", sizeof(long long));



#include <stdio.h>

int main() {
    printf("-------------------------------------------\n");
    printf("%-20s %-10s\n", "Data Type", "Size (Bytes)");
    printf("-------------------------------------------\n");

    // মৌলিক এবং অতিরিক্ত ডেটা টাইপসমূহ
    printf("%-20s %-10zu\n", "char", sizeof(char));
    printf("%-20s %-10zu\n", "short int", sizeof(short int));
    printf("%-20s %-10zu\n", "int", sizeof(int));
    printf("%-20s %-10zu\n", "unsigned int", sizeof(unsigned int));
    printf("%-20s %-10zu\n", "long int", sizeof(long int));
    printf("%-20s %-10zu\n", "long long int", sizeof(long long int));
    
    printf("-------------------------------------------\n");                                        
    printf("%-20s %-10zu\n", "float", sizeof(float));
    printf("%-20s %-10zu\n", "double", sizeof(double));
    printf("%-20s %-10zu\n", "long double", sizeof(long double));
    
    printf("-------------------------------------------\n");

    return 0;
}


Data Type            Size (Bytes)
-------------------------------------------
char                 1
short int            2
int                  4
unsigned int         4
long int             4
long long int        8
-------------------------------------------
float                4
double               8
long double          12






#include <stdio.h>
#include <string.h>
int main() {
    printf("----------------------------------------------------------\n");
    // ৩টি কলামের জন্য জায়গা নির্ধারণ করা হয়েছে
    printf("%-15s %-10s %-15s\n", "Name", "ID", "Phone Number");
    printf("----------------------------------------------------------\n");

    // নাম, আইডি এবং ফোন নাম্বার (স্ট্রিং হিসেবে) যোগ করা হয়েছে
    // ফোন নাম্বার শুরুতে ০ রাখার জন্য " " (কোলেশন) ব্যবহার করা হয়েছে
    printf("%-15s %-10d %-15s\n", "Abdullah", 5894, "01745677826");
    printf("%-15s %-10d %-15s\n", "Mohammad", 6021, "01568451112");
    printf("%-15s %-10d %-15s\n", "Ebny", 5542, "01772685006");
    
    printf("----------------------------------------------------------\n");

    return 0;
} 

ফোন নাম্বারকে String হিসেবে নেওয়া: ফোন নাম্বারের শুরুতে 0 দেখানোর জন্য এবং বড় সংখ্যা হ্যান্ডেল করার ঝামেলা এড়াতে %s ব্যবহার করেছি। এতে ফোন নাম্বার একদম হুবহু প্রিন্ট হবে।

কলাম উইডথ অ্যাডজাস্টমেন্ট: নামের জন্য ১৫ ঘর, আইডির জন্য ১০ ঘর এবং নাম্বারের জন্য ১৫ ঘর জায়গা নিয়েছি যাতে টেবিলটি স্ক্রিনে সুন্দরভাবে ফিট হয়।

প্রফেশনাল টিপস:
যদি কখনো ফোন নাম্বার নিয়ে গণিত (যেমন যোগ-বিয়োগ) করতে না হয়, তবে সেটাকে সবসময় স্ট্রিং বা ক্যারেক্টার অ্যারে হিসেবে সেভ করবে। এতে শুরুর 0 হারাবে না এবং মেমোরিও সাশ্রয় হবে।





#include <stdio.h>

int main() {
    // ডেটা সেট
    char name[] = "Abdullah";
    long int student_id = 2026010500L;    // Long Int
    float height = 5.86f;                 // Float
    double cgpa = 3.925;                  // Double
    long long phone = 8801745677826LL;    // Long Long

    // টেবিল হেডার
    printf("-------------------------------------------------------------------------------\n");
    printf("%-15s %-15s %-10s %-10s %-15s\n", "Name", "Student ID", "Height", "CGPA", "Phone Number");
    printf("-------------------------------------------------------------------------------\n");

    // ডেটা প্রিন্ট করা
    // %-15s  -> স্ট্রিং, ১৫ ঘর
    // %-15ld -> লং ইন্ট, ১৫ ঘর
    // %-10.1f -> ফ্লোট, ১০ ঘর (দশমিকের পর ১ ঘর)
    // %-10.2lf -> ডাবল, ১০ ঘর (দশমিকের পর ২ ঘর)
    // %-15lld -> লং লং, ১৫ ঘর
    
    printf("%-15s %-15ld %-10.1f %-10.2lf %-15lld\n", name, student_id, height, cgpa, phone);

    // আরও একটি ডেমো ডেটা যোগ বোঝার সুবিধার জন্য
    printf("%-15s %-15ld %-10.1f %-10.2lf %-15lld\n", 
          "Mohammad", 2026010501L, 6.0f, 3.85, 8801812345678LL);

    printf("-------------------------------------------------------------------------------\n");

    return 0;
}

String	%s	%-15s (১৫ ঘর জায়গা)
Integer%d%-10d (১০ ঘর জায়গা)
Long Int%ld%-15ld
Long Long%lld%-20lld
Float%f%-10.2f (১০ ঘর, ২ দশমিক)Double%lf%-12.3lf (১২ ঘর, ৩ দশমিক)

%-10s: এটি স্ট্রিং-এর জন্য ১০টি ক্যারেক্টারের সমান জায়গা তৈরি করবে। মাইনাস (-) চিহ্ন দেওয়ার কারণে লেখাটি বাম দিক থেকে শুরু হবে (Left-aligned)।

%-8d: এটি পূর্ণসংখ্যার জন্য ৮টি ক্যারেক্টারের জায়গা ছেড়ে দিবে।


