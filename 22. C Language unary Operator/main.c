C ল্যাঙ্গুয়েজে Unary - (Minus) Operator হলো এমন একটি অপারেটর যা শুধুমাত্র একটি (Operand) বা ভেরিয়েবলের ওপর কাজ করে।
এর প্রধান কাজ হলো কোনো সংখ্যার চিহ্ন পরিবর্তন করে দেওয়া (পজিটিভ থাকলে নেগেটিভ করা, আর নেগেটিভ থাকলে পজিটিভ করা)। (যাকে unary minus বলা হয়)
যেহেতু এটি কাজ করার জন্য মাত্র একটি ভেরিয়েবল বা সংখ্যা ব্যবহার করে, তাই একে Unary অপারেটর বলা হয় (যেমন সাধারণ বিয়োগ করতে a - b দুটি operand লাগে, তাই সেটি Binary অপারেটর)। 
গাণিতিক নিয়মে কোনো সংখ্যার আগে মাইনাস (-) বসালে যা হয়, এটিও ঠিক তাই করে।
যদি সংখ্যাটি +5 হয়, তবে - অপারেটর একে -5 বানিয়ে দেবে। 
যদি সংখ্যাটি -10 হয়, তবে - অপারেটর একে +10 বানিয়ে দেবে (কারণ মাইনাসে মাইনাসে প্লাস হয়)।

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int result;
    int isTrue = 1; // 1 is true

    printf("Initial Value: a = %d, b = %d\n\n", a, b);

    result = -a;
    printf("Unary Minus of a    : %d\n", result);

    a++; 
    printf("After Increment a++ : %d\n", a);

 
    b--; 
    printf("After Decrement b-- : %d\n", b);

    // ৪. Logical NOT (!) 
    printf("Logical NOT of isTrue: %d\n", !isTrue); // ১ থাকলে ০ দেখাবে

    // ৫. Sizeof Operator : variable Bytes
    printf("Size of int a       : %zu bytes\n", sizeof(a));

    return 0;

}


++	Increment	ভেরিয়েবলের মান ১ বৃদ্ধি করে (যেমন: a++ বা ++a)
--	Decrement	ভেরিয়েবলের মান ১ হ্রাস করে (যেমন: a-- বা --a)
-	Unary Minus	ধনাত্মক সংখ্যাকে ঋণাত্মক করে
!	Logical NOT	কন্ডিশন উল্টে দেয় (True হলে False করে)
sizeof	Sizeof	ডেটা টাইপের মেমোরি সাইজ বের করে
&	Address of	ভেরিয়েবলের মেমোরি অ্যাড্রেস খুঁজে পায়
-----------------------------------------------------------
    
অপারেন্ড ভ্যালু এবং ভেরিয়েবল—উভয়ই হতে পারে।

#include <stdio.h>

int main() {
    int x = 10; 
    int y = 20; 
    int result;

    // ১. এখানে x এবং y হলো 'Variable Operand'
    result = x + y; 
    printf("Result using variables: %d\n", result);

    // ২. এখানে 50 এবং 30 হলো 'Value (Constant) Operand'
    result = 50 - 30; 
    printf("Result using values: %d\n", result);

    // ৩. এখানে x হলো Variable এবং 5 হলো Value অপারেন্ড
    result = x * 5; 
    printf("Result using both: %d\n", result);

    return 0;
}

#include <stdio.h>
int main()
{
   int a = 5;
   int b = -a;
   printf("Result is: %d\n", b);

   int num1 = -5;
   int num2 = -num1;
   printf("Result is: %d\n", num2);
   return 0;
}

সি ল্যাঙ্গুয়েজের প্রধান ইউনিারি অপারেটরসমূহ:
++ (Increment): চলকের মান ১ বৃদ্ধি করে। এটি প্রি-ইনক্রিমেন্ট (++a) বা পোস্ট-ইনক্রিমেন্ট (a++) হতে পারে।
-- (Decrement): চলকের মান ১ হ্রাস করে। এটি প্রি-ডিক্রিমেন্ট (--a) বা পোস্ট-ডিক্রিমেন্ট (a--) হতে পারে।
- (Unary Minus): কোনো সংখ্যার চিহ্ন পরিবর্তন করে (প্লাসকে মাইনাস করে) Scaler।
+ (Unary Plus): সংখ্যার পজিটিভ মান নির্দেশ করে (এটি সাধারণত প্রয়োজন হয় না, ডিফল্ট পজিটিভ থাকে) Scaler।
! (Logical NOT): বুলিয়ান মান উল্টে দেয় (সত্যকে মিথ্যা, মিথ্যাকে সত্য করে) Scaler।
~ (Bitwise NOT): বাইনারি বিটগুলো উল্টে দেয় (১ কে ০, ০ কে ১ করে) TutorialsPoint।
& (Address of): কোনো ভেরিয়েবলের মেমরি অ্যাড্রেস নির্দেশ করে Scaler।
sizeof(): কোনো ডেটা টাইপ বা ভেরিয়েবলের মেমরি সাইজ (বাইটে) রিটার্ন করে Scaler।

-----------------------------------------------------------------------------------------------------------------------
C language Binary Operator

C প্রোগ্রামিং ল্যাঙ্গুয়েজে Binary Operators (বাইনারি অপারেটর) হলো এমন সব সিম্বল যা দুটি Operand (অপারেন্ড) বা ভ্যালুর ওপর কাজ করে ফলাফল প্রদান করে। 

সহজভাবে বলতে গেলে, যদি a + b লেখা হয়, তবে এখানে + হলো একটি বাইনারি অপারেটর কারণ এটি দুটি চলক (a এবং b) নিয়ে কাজ করছে। 

C ল্যাঙ্গুয়েজে প্রধান বাইনারি অপারেটরগুলো নিচে দেওয়া হলো:
    
Arithmetic Operators (গাণিতিক অপারেটর): সাধারণ গাণিতিক হিসাবের জন্য ব্যবহৃত হয়।
+ (যোগ), - (বিয়োগ), * (গুণ), / (ভাগ), % (ভাগশেষ বা মডুলাস)।
    
Relational Operators (সম্পর্কযুক্ত অপারেটর): দুটি ভ্যালুর মধ্যে তুলনা করার জন্য ব্যবহৃত হয়।
== (সমান কিনা), != (অসমান কিনা), > (বড়), < (ছোট), >= (বড় বা সমান), <= (ছোট বা সমান)।
    
Logical Operators (লজিক্যাল অপারেটর): শর্ত বা লজিক চেক করার জন্য ব্যবহৃত হয়।
&& (Logical AND), || (Logical OR)।
    
Bitwise Operators (বিটওয়াইজ অপারেটর): ডেটার বাইনারি লেভেলে (বিট বাই বিট) কাজ করার জন্য ব্যবহৃত হয়।
& (Bitwise AND), | (Bitwise OR), ^ (Bitwise XOR), << (Left Shift), >> (Right Shift)।

Unary (-) Expression Example
#include <stdio.h>

int main() {
    int a = 8;
    int result = -a + 20;

    printf("Result: %d\n", result);

    return 0;
}
Assignment Operators (অ্যাসাইনমেন্ট অপারেটর): কোনো ভ্যালু চলকে জমা রাখার জন্য ব্যবহৃত হয়।
= (সমান), +=, -=, *=, /= ইত্যাদি।

