সি ল্যাঙ্গুয়েজে (C Language) Data Type (ডাটা টাইপ) হলো এমন একটি নির্দেশক, যা কম্পাইলারকে বলে দেয় একটি ভেরিয়েবলের ভেতরে কী ধরণের তথ্য বা ডেটা জমা রাখা হচ্ছে এবং 
সেই ডেটার জন্য মেমোরিতে (RAM) ঠিক কতটুকু জায়গা (Bytes) বরাদ্দ করতে হবে।


সি ল্যাঙ্গুয়েজে ডাটা টাইপ কত প্রকার? (Classification)
সি ল্যাঙ্গুয়েজে ডাটা টাইপকে প্রধানত ৪টি ভাগে ভাগ করা যায়:

Primary / Primitive Data Types (মৌলিক ডাটা টাইপ): এগুলো সি ল্যাঙ্গুয়েজের একদম বিল্ট-ইন বা মূল ডাটা টাইপ।

Derived Data Types (লব্ধ ডাটা টাইপ): মৌলিক ডাটা টাইপগুলোর ওপর ভিত্তি করে এগুলো তৈরি হয়।

User-Defined Data Types (ইউজার-ডিফাইন্ড ডাটা টাইপ): প্রোগ্রামার নিজে নিজের সুবিধা অনুযায়ী এই টাইপগুলো তৈরি করে নেয়।

Void Data Type: এর মানে হলো "Empty" বা কোনো টাইপ নেই (সাধারণত ফাংশনের রিটার্ন টাইপ হিসেবে ব্যবহৃত হয়)।


১. Primary / Primitive Data Types (সবচেয়ে গুরুত্বপূর্ণ)
কোড লেখার সময় সবচেয়ে বেশি এই ৪টি মৌলিক ডাটা টাইপ ব্যবহার করা হয়

Primary বা Primitive Data Type (মৌলিক ডাটা টাইপ) বলা হয় সি ল্যাঙ্গুয়েজের একদম বিল্ট-ইন বা আদিম ডাটা টাইপগুলোকে, যেগুলো সি ল্যাঙ্গুয়েজে আগে থেকেই তৈরি করা আছে 
এবং যেগুলোকে অন্য কোনো ডাটা টাইপের সাহায্য ছাড়া একদম স্বাধীনভাবে ব্যবহার করা যায়।


সি ল্যাঙ্গুয়েজের ৪টি মূল Primitive Data Type:

১. int (Integer)
কাজ: যেকোনো পজিটিভ বা নেগেটিভ পূর্ণসংখ্যা (যার কোনো দশমিক অংশ নেই) জমা রাখতে এটি ব্যবহৃত হয়।

সাইজ: সাধারণত 4 Bytes (৩২ বিট)।

উদাহরণ: int roll = 15; বা int temperature = -5;


২. float (Floating-point)
কাজ: ছোট বা সাধারণ দশমিক সংখ্যা (Fractional Numbers) মেমোরিতে রাখার জন্য এটি ব্যবহৃত হয়। এটি দশমিকের পর ৬ থেকে ৭ ঘর পর্যন্ত নিখুঁত মান দিতে পারে।

সাইজ: 4 Bytes (৩২ বিট)।

উদাহরণ: float gpa = 3.89; বা float price = 120.50;


৩. double (Double precision floating-point)
কাজ: এটিও দশমিক সংখ্যার জন্যই ব্যবহৃত হয়, তবে যদি সংখ্যাটি অনেক বড় হয় কিংবা দশমিকের পর অনেক বেশি ঘর পর্যন্ত নিখুঁত মানের প্রয়োজন হয় 
(যেমন বিজ্ঞানের কোনো হিসাব বা পাই-এর মান), তখন এটি ব্যবহার করা হয়। এটি দশমিকের পর ১৫ ঘর পর্যন্ত নিখুঁত মান ধরে রাখতে পারে।

সাইজ: 8 Bytes (৬৪ বিট)।

উদাহরণ: double pi = 3.141592653589793;


৪. char (Character)
কাজ: যেকোনো একটি একক ক্যারেক্টার, লেটার, নম্বর বা স্পেশাল সিম্বলকে সিঙ্গেল কোটেশনের (' ') ভেতরে জমা রাখতে এটি ব্যবহৃত হয়।

সাইজ: 1 Byte (৮ বিট)।

উদাহরণ: char status = 'A'; বা char symbol = '$';




২. Derived Data Types (লব্ধ ডাটা টাইপ)
যখন এক বা একাধিক মৌলিক ডাটা টাইপকে জোড়া দিয়ে নতুন কোনো ফরম্যাট তৈরি করা হয়, তখন তাকে ডেরাইভড ডাটা টাইপ বলে।

Array (অ্যারে): একই ধরণের একাধিক ডেটা একসাথে রাখার জন্য (যেমন আমরা স্ট্রিং তৈরির জন্য char name[20]; ব্যবহার করি)।

Pointer (পয়েন্টার): যা কোনো ডেটা না রেখে অন্য কোনো ভেরিয়েবলের মেমোরি অ্যাড্রেস বা ঠিকানা ধরে রাখে।

Function (ফাংশন): নির্দিষ্ট কোনো কাজের জন্য তৈরি করা কোড ব্লক।




৩. User-Defined Data Types (ব্যবহারকারী-নির্ধারিত ডাটা টাইপ)
বড় প্রজেক্ট বা সফটওয়্যার তৈরি করার সময় প্রোগ্রামার নিজের ডেটা স্ট্রাকচার সাজানোর জন্য এগুলো তৈরি করে:

struct (Structure): ভিন্ন ভিন্ন ডাটা টাইপকে একসাথে একটি প্যাকেজ বানানোর জন্য (যেমন স্টুডেন্টের আইডি, নাম, জিপিএ একসাথে রাখা)।

union: স্ট্রাকচারের মতোই, তবে এটি মেমোরি বাঁচানোর জন্য একই জায়গা শেয়ার করে কাজ করে।

typedef / enum: কোডকে আরও সহজ করে চেনার জন্য কাস্টম নাম বা লিস্ট তৈরি করা।



#include <stdio.h>

int main() {
    int studentId = 101;       // Primary Type: int
    float examScore = 85.5;    // Primary Type: float
    char finalGrade = 'A';     // Primary Type: char

    printf("ID: %d, Score: %.1f, Grade: %c\n", studentId, examScore, finalGrade);
    return 0;
}



Boolean Data Type-----

মূল বা আদি সি ল্যাঙ্গুয়েজে (ANSI C বা C89 ভার্সনে) সরাসরি bool নামে কোনো ডাটা টাইপ ছিল না। তখন সত্য বা মিথ্যা বোঝানোর জন্য পূর্ণসংখ্যা ব্যবহার করা হতো—0 মানে মিথ্যা (False) এবং 0 বাদে অন্য যেকোনো সংখ্যা (সাধারণত 1) মানে সত্য (True)।

কিন্তু ১৯৯৯ সালে যখন সি-এর নতুন ভার্সন C99 আসে, তখন সি ল্যাঙ্গুয়েজে অফিশিয়ালি বুলিয়ান ডাটা টাইপ যোগ করা হয়।


সি ল্যাঙ্গুয়েজে bool ব্যবহারের নিয়ম
সি-তে বুলিয়ান টাইপ ব্যবহার করার দুটি উপায় আছে:

উপায় ১: আধুনিক নিয়ম (stdbool.h হেডার ফাইল ব্যবহার করে)
এটি সবচেয়ে সহজ এবং মডার্ন উপায়। কোডের শুরুতে  জাস্ট #include <stdbool.h> লিখতে হবে। এটি যোগ করলে অন্য সব ল্যাঙ্গুয়েজের মতো সরাসরি bool, true, এবং false শব্দগুলো ব্যবহার করা যাবে।


#include <stdio.h>
#include <stdbool.h> // bool, true, false ব্যবহার করার জন্য এই হেডার ফাইল লাগবে

int main() {
    bool isPassed = true;
    bool isFailed = false;

    //  bool এর মান প্রিন্ট করতে ফরম্যাট স্পেসিফায়ার হিসেবে %d ব্যবহার করতে হয়
    printf("Passed Status: %d\n", isPassed); // আউটপুট আসবে: 1
    printf("Failed Status: %d\n", isFailed); // আউটপুট আসবে: 0

    // কন্ডিশনে ব্যবহার:
    if (isPassed) {
        printf("Congratulations! You passed the exam.\n");
    }

    return 0;
}


২: ব্যাকগ্রাউন্ডের আসল রূপ (_Bool ব্যবহার করে)

যদি কোনো হেডার ফাইল (stdbool.h) ছাড়া সরাসরি সি-এর নিজস্ব বিল্ট-ইন কিউওয়ার্ড ব্যবহার করতে চান, তবে লিখতে হবে _Bool ( শুরুতে একটা আন্ডারস্কোর এবং বড় হাতের B)। 
তবে এটি true বা false চেনে না, একে 1 বা 0 দিয়ে এসাইন করতে হয়।
    

#include <stdio.h>

int main() {
    _Bool isRaining = 1; // 1 মানে true

    if (isRaining) {
        printf("Take an umbrella!\n");
    }
    return 0;
}

বুলিয়ান ডেটা কেবল 0 বা 1 (যা ১টি বিট বা Bit) হলেই প্রকাশ করা সম্ভব। কিন্তু মেমোরি বা র‍্যামের সবচেয়ে ছোট এড্রেসযোগ্য ইউনিট হলো ১ বাইট (1 Byte)। তাই সি ল্যাঙ্গুয়েজে একটি bool ভেরিয়েবল মেমোরিতে ১ বাইট বা ৮ বিট জায়গা বরাদ্দ করে।
কিন্তু সি ল্যাঙ্গুয়েজে এই #include <stdbool.h> এর বিষয়টা একটু ইউনিক।




#include <stdio.h>
int main() {
    // Create variables
    int num1 = 5; // Integer (whole number)
    int num2 = 10;
    float myFloatNum = 5.99f; // Floating point number
    double balance = 52.125487;
    char myLetter = 'D';     // Character
    printf("Number are %d, %d\n", num1, num2);
    printf("Balance is: %.2lf\n", balance);
    // Print variables
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char name [] = "Mohammad";
    int age = 25;
    strcpy(name, "Abdullah");
    age = 30;
    float height = 5.2;
    char village [] = "Changmary";
    char subject [] = "Programming";
    char gread = 'A';
    int num1, num2;
    num1 = 20, num2 = 30;
    printf("My name is: %s\n", name);
    printf("My age is: %d\n", age);
    printf("My height is: %.1f\n", height);
    printf("My village is: %s\n", village);
    printf("My subject is: %s\n", subject);
    printf("My gread is: %c\n", gread);
    printf("Num1 is = %d And Num2 is = %d\n", num1, num2);
    return 0;
}
*/

------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {

    char name[50];
    int age;
    float height;
    char village[50];
    char subject[50];
    char grade;
    float cgpa;
    int num1, num2;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    getchar();  // newline পরিষ্কার করার জন্য

    printf("Enter your village: ");
    fgets(village, sizeof(village), stdin);

    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n--------- Your Output ---------\n");
    printf("My name is: %s", name);
    printf("My age is: %d\n", age);
    printf("My height is: %.1f\n", height);
    printf("My village is: %s", village);
    printf("My subject is: %s", subject);
    printf("My grade is: %c\n", grade);
    printf("My CGPA is: %.2f\n", cgpa);
    printf("Num1 is: %d and Num2 is: %d\n", num1, num2);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h> 

int main() {
    char name[50], address[50], subject[30], bloodGroup[5], phoneNumber[22], grade;
    bool married;
    int age;
    float height, cgpa;
    double accountBalance;


    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);


    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);

    printf("Enter your bloodGroup: ");
    fgets(bloodGroup, sizeof(bloodGroup), stdin);

    printf("Enter your phone: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // স্পেস দিয়ে ইনপুট নিলে বাফার সমস্যা কম হয়

    getchar(); // এখানে একটি getchar() লাগবে কারণ উপরের scanf একটি '\n' ছেড়ে দিয়েছে

    printf("Are you married (0 or 1): ");
    int temp; // bool সরাসরি scanf এ না নিয়ে int এ নেওয়া নিরাপদ
    scanf("%d", &temp);
    married = temp;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("Enter your accountBalance: ");
    scanf("%lf", &accountBalance);

    printf("\n--------- Student Information ----------\n");
    printf("Name       : %s", name);
    printf("Address    : %s", address);
    printf("Subject    : %s", subject);
    printf("Age        : %d\n", age);
    printf("Grade      : %c\n", grade);
    printf("Blood Group: %s", bloodGroup);
    printf("Phone      : %s", bloodGroup);
    printf("Married    : %s\n", married ? "Yes" : "No");
    printf("Height     : %.1f\n", height);
    printf("CGPA       : %.2f\n", cgpa);
    printf("Balance    : %.10lf\n", accountBalance);
    return 0;
}



--------------- profesonal --------------
#include <stdio.h>
#include <string.h>

int main()
{
   char name[50], village[50], subject[50], grade, phoneNumber[20];
   int age, num1, num2;
   float height, cgpa;
   double accountBalance;

   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = 0; // নিউলাইন ক্যারেক্টার রিমুভ করা

   printf("Enter your age: ");
   scanf("%d", &age);

   printf("Enter your Height: ");
   scanf("%f", &height);
   
   // গুরুত্বপূর্ণ: scanf এর পর fgets ব্যবহার করলে বাফার ক্লিয়ার করতে হয়
   while (getchar() != '\n'); 

   printf("Enter your phone number: ");
   fgets(phoneNumber, sizeof(phoneNumber), stdin);
   phoneNumber[strcspn(phoneNumber, "\n")] = 0;

   printf("Enter your village: ");
   fgets(village, sizeof(village), stdin);
   village[strcspn(village, "\n")] = 0;


   printf("Enter your subject: ");
   fgets(subject, sizeof(subject), stdin);
   subject[strcspn(subject, "\n")] = 0;

   // Grade ইনপুট (Space ব্যবহার করা হয়েছে আগের বাফার এড়াতে)
   printf("Enter your grade: ");
   scanf(" %c", &grade);

   printf("Enter your Account Balance: ");
   scanf("%lf", &accountBalance);

   printf("Enter your cgpa: ");
   scanf("%f", &cgpa);
    
   printf("Enter first integer number: ");
   scanf("%d", &num1);
   
   printf("Enter second integer number: ");
   scanf("%d", &num2);
   
   printf("\n----------- Student Information ---------------\n");
   printf("Name    : \"%s\"\n", name);
   printf("Age     : %d\n", age);
   printf("Height  : %.2f Feet\n", height);
   printf("Phone   : %s\n", phoneNumber);
   printf("Village : %s\n", village);
   printf("Subject : %s\n", subject);
   printf("Grade   : %c\n", grade);
   printf("Balance : %.9lf\n", accountBalance);
   printf("CGPA    : %.2f\n", cgpa);
   printf("Numbers : %d, %d\n", num1, num2);
   printf("-----------------------------------------------\n");

   return 0;
}


profesonal --------------
#include <stdio.h>
#include <string.h> 

int main() {
    char name[50], village[50], subject[50], grade;
    int age, num1, num2;
    float height, cgpa;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height: ");
    scanf("%f", &height);

    // বাফার ক্লিয়ার করা (যাতে পরের fgets ঠিকমতো কাজ করে)
    while (getchar() != '\n'); 

    printf("Enter your village: ");
    fgets(village, sizeof(village), stdin);
    village[strcspn(village, "\n")] = 0;

    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strcspn(subject, "\n")] = 0;

    গ্রেড ইনপুট (স্পেসসহ %c বাফার ক্লিন রাখে)
    printf("Enter your grade: ");
    scanf(" %c", &grade); 

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
   
    printf("\n------------- Student Profile -------------\n");
    printf("%-15s : %s\n", "Name", name);
    printf("%-15s : %d years\n", "Age", age);
    printf("%-15s : %.1f ft\n", "Height", height);
    printf("%-15s : %s\n", "Village", village);
    printf("%-15s : %s\n", "Subject", subject);
    printf("%-15s : %c\n", "Grade", grade);
    printf("%-15s : %.2f\n", "CGPA", cgpa);
    printf("%-15s : %d, %d\n", "Numbers", num1, num2);
    printf("-------------------------------------------\n");

    return 0;
}

Profesional 100% code.........................
হ্যাঁ, ১০০%! যদি প্রতিবার scanf() ব্যবহার করার পর while (getchar() != '\n'); লুপটি ব্যবহার করা হয়, 
তবে সেটাকে সি ল্যাঙ্গুয়েজের স্ট্যান্ডার্ড অনুযায়ী ১০০% প্রফেশনাল এবং নিরাপদ (Robust) কোড বলা যায়।
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  char name[50], address[50], subject[50], phone[22], grade[5], gmail[50], bloodGroup[10];
  char section;
  bool married;
  int age;
  float height, cgpa;
  double accountBalance;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;

  printf("Enter your age: ");
  scanf("%d", &age);
  while (getchar() != '\n'); // ফিক্স ১: বয়সের পর বাফার ক্লিয়ার

  printf("Enter your height: ");
  scanf("%f", &height);
  while (getchar() != '\n'); // ফিক্স ২: হাইটের পর বাফার ক্লিয়ার

  printf("Enter your address: ");
  fgets(address, sizeof(address), stdin);
  address[strcspn(address, "\n")] = 0;
 
  printf("Enter your subject: ");
  fgets(subject, sizeof(subject), stdin);
  subject[strcspn(subject, "\n")] = 0;

  printf("Enter your grade: ");
  fgets(grade, sizeof(grade), stdin);
  grade[strcspn(grade, "\n")] = 0;

  printf("Enter your section: ");
  scanf(" %c", &section);
  while (getchar() != '\n');

  printf("Enter your cgpa: ");
  scanf("%f", &cgpa);
  while (getchar() != '\n');

  printf("Enter your gmail: ");
  fgets(gmail, sizeof(gmail), stdin);
  gmail[strcspn(gmail, "\n")] = 0;
  
  printf("Enter your bloodGroup: ");
  fgets(bloodGroup, sizeof(bloodGroup), stdin);
  bloodGroup[strcspn(bloodGroup, "\n")] = 0;

  printf("Are you married: 1(yes) or 0 (No): ");
  int temp;
  scanf("%d", &temp);
  married = temp;
  while (getchar() != '\n'); 

  printf("Enter account balance: ");
  scanf("%lf", &accountBalance);
  while (getchar() != '\n');

  printf("Enter your phone: ");
  fgets(phone, sizeof(phone), stdin);
  phone[strcspn(phone, "\n")] = 0; // ফিক্স ৪: ফোনের নিউ-লাইন রিমুভ
  
  printf("\n----------Student Information-----------\n");

  printf("%-15s : %s\n", "Name", name);
  printf("%-15s : %d years old\n","Age", age);
  printf("%-15s : %.1f feet\n", "Height", height);
  printf("%-15s : %s\n", "Address", address );
  printf("%-15s : %s\n", "Subject", subject);
  printf("%-15s : %s\n", "Grade", grade);
  printf("%-15s : %c\n", "Section", section);
  printf("%-15s : %.2f\n", "Cgpa", cgpa);
  printf("%-15s : %s\n", "Gmail", gmail);
  printf("%-15s : %s\n", "Blood", bloodGroup);
  printf("%-15s : %s\n", "Married", married ? "Yes" : "No");
  printf("%-15s : $%.2lf\n", "Account", accountBalance);
  printf("%-15s : %s\n", "Phone", phone);

  return 0;
}
