// C language Input
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int age;
    char address[25];
    float height;
    char subject[30];
    float cgpa;
    char grade;

    printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s", name);

    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

    getchar();

    printf("Enter Your Address: ");
    fgets(address, sizeof(address), stdin);
    printf("Your address is: %s", address);

    printf("Enter Your Height: ");
    scanf("%f", &height);
    printf("Your height is: %.1f\n", height);

    getchar();

    printf("Enter Your Subject: ");
    fgets(subject, sizeof(subject), stdin);
    printf("Your subject is: %s", subject);

    printf("Enter Your CGPA: ");
    scanf("%f", &cgpa);
    printf("Your cgpa is: %.2f\n", cgpa);

    printf("Enter Your GRADE: ");
    scanf(" %c", &grade);
    printf("Your grade is: %c\n", grade);
    return 0;

}


#include <stdio.h>
#include <string.h>

int main() {
    // ১. ভেরিয়েবল ডিক্লেয়ারেশন এবং ইনিশিয়ালাইজেশন
    char name[30], village[30], subject[25], grade;
    int age;
    float height, cgpa;

    printf("Enter your name: ");
    scanf(" %[^\n]", name); // স্পেসসহ নাম নেওয়ার জন্য %[^\n] ব্যবহার করা হয়েছে

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    // ৩. আউটপুট সুন্দর করে সাজানো (টেবিল ফরম্যাটে)
    printf("\n--- Student Information ---\n");
    printf("%-15s: %s\n", "Name", name);
    printf("%-15s: %d\n", "Age", age);
    printf("%-15s: %.2f\n", "CGPA", cgpa); // %.2f দিয়ে দশমিকের পর ২ ঘর দেখানো হয়েছে

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char name[30], village[30], subject[25], grade;
    int age;
    float height, cgpa;

    // ১. নাম ইনপুট
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // নামের শেষে থাকা Newline সরিয়ে ফেলা

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    while (getchar() != '\n'); 

    printf("Enter your village: ");
    fgets(village, sizeof(village), stdin);
    village[strcspn(village, "\n")] = 0; // Newline রিমুভ

    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strcspn(subject, "\n")] = 0; // Newline রিমুভ

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // ২. আউটপুট টেবিল আকারে সাজানো (আগে যা শিখেছিলে)
    printf("\n\n%-20s %-10s %-10s %-10s\n", "Property", "Value", "Property", "Value");   
    %-20s	২০ ঘর জায়গা নিবে, বাম দিকে চাপানো।	"Property"
    %-10s	১০ ঘর জায়গা নিবে, বাম দিকে চাপানো।	"Value"
    %-10s	১০ ঘর জায়গা নিবে, বাম দিকে চাপানো।	"Property"
    %-10s	১০ ঘর জায়গা নিবে, বাম দিকে চাপানো।	"Value"

    -: বাম পাশে চাপানো (Left Align)।
    20: মোট ২০টি অক্ষরের জায়গা।
    s: এটি একটি স্ট্রিং।

    //printf("%-10s %-10s %-10s %-10s", "A", "B", "C", "D");
    // আউটপুট: A          B          C          D
   // printf("%-10s %-10s %-10s", "A", "B", "C", "D");
   // আউটপুট: A          B          C         
   // (এখানে 'D' প্রিন্ট হবে না)
    
    printf("------------------------------------------------------------\n");
    printf("%-20s: %-10s | %-10s: %d\n", "Name", name, "Age", age);
    printf("%-20s: %-10.1f | %-10s: %s\n", "Height", height, "Village", village);

    %-20s	String	"Height"	২০ ঘর জায়গা নিয়ে বাম পাশে "Height" লিখবে।
    %-10.1f	Float	height	১০ ঘর জায়গা নিয়ে বাম পাশে দশমিকের পর ১ ঘর পর্যন্ত উচ্চতা দেখাবে।
    %-10s	String	"Village"	১০ ঘর জায়গা নিয়ে বাম পাশে "Village" লিখবে।
     %s	       String	 village	    সরাসরি গ্রামের নাম প্রিন্ট করবে।
    
    //প্রোগ্রামিংয়ে এই | চিহ্নটিকে বলা হয় Pipe (পাইপ) চিহ্ন। তোমার কোডে এটি কোনো গাণিতিক কাজ করার জন্য নয়, বরং আউটপুটকে সুন্দর করে সাজানোর জন্য ব্যবহার করা হয়েছে।
   // | ছাড়া আউটপুট: Height: 5.2 Village: Changmary (সব হিজিবিজি মনে হতে পারে)
  //  | সহ আউটপুট: Height: 5.2 | Village: Changmary (পরিষ্কার এবং সুন্দর)
    
    printf("%-20s: %-10s | %-10s: %.2f\n", "Subject", subject, "CGPA", cgpa);
    printf("%-20s: %-10c\n", "Grade", grade);
    printf("------------------------------------------------------------\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char name[30], address[25], subject[25], phoneNumber[15], grade;
    int age;
    float height, cgpa;
    double accountBalance; //  
    printf("Enter your name: ");
    scanf(" %[^\n]s", name); XXXXXX
    
    scanf(" %[^\n]", name);
    
    // শেষে 's' বাদ দেওয়া হয়েছে আসলে scanf এ যখন তুমি %[^\n] ব্যবহার করো, তখন সেটি নিজেই একটি String Format Specifier হিসেবে কাজ করে। 
    
    ১. s এবং [^\n] এর কাজের পার্থক্য
    %s এর কাজ: এটি শুধু একটি শব্দ ইনপুট নেয়। যখনই এটি কোনো স্পেস (Space) পায়, তখনই ইনপুট নেওয়া বন্ধ করে দেয়। (যেমন: "Abdullah Aziz" লিখলে এটি শুধু "Abdullah" নিবে)।

    %[^\n] এর কাজ: একে বলা হয় Scanset। এটি কম্পিউটারকে বলে—"যতক্ষণ না তুমি \n (অর্থাৎ Enter কী) পাচ্ছ, ততক্ষণ পর্যন্ত স্পেসসহ যা পাবে সবটুকু ইনপুট নাও।"

   ২. কেন শেষে s নেই?
   প্রফেশনাল ভাষায় বললে, %s এবং %[...] দুটিই আলাদা ফরম্যাট স্পেসিফায়ার।

  যখন তুমি %s লেখো, s নিজেই বলে দেয় এটি স্ট্রিং।

  যখন তুমি [...] (Square Brackets) ব্যবহার করো, তখন এই ব্র্যাকেটগুলোই নির্দেশ করে যে এখানে একটি ক্যারেক্টার অ্যারে বা স্ট্রিং ইনপুট নেওয়া হচ্ছে।

  তাই %[^\n]s লিখলে সেটি ভুল সিনট্যাক্স হবে। কারণ কম্পিউটার কনফিউজড হয়ে যাবে যে তুমি কি Scanset ব্যবহার করছ নাকি সাধারণ string (s)।

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your address: ");
    scanf(" %[^\n]", address);

    printf("Enter your phone number: ");
    scanf(" %[^\n]", phoneNumber);                 

    scanf এর ভেতরে কোটেশনের ঠিক পরেই এই স্পেস (Space) দেওয়াটা খুবই জরুরি, বিশেষ করে যখন তুমি একাধিক ইনপুট নিচ্ছ।
    ১. বাফার ক্লিয়ার করা (Ignoring Newline)
    আমরা যখন আগের কোনো ইনপুট দিই (যেমন: বয়স বা রোল নম্বর), তখন কিবোর্ড থেকে একটি সংখ্যা লিখে Enter প্রেস করি। এই Enter প্রেস করার ফলে একটি অদৃশ্য \n (Newline character) কম্পিউটারের মেমোরিতে (যাকে ইনপুট বাফার বলে) থেকে যায়।

   পরের বার যখন তুমি নাম ইনপুট নিতে চাও, scanf তখন ওই আগের রয়ে যাওয়া \n টিকেই তোমার নাম হিসেবে ধরে নেয়। ফলে প্রোগ্রামটি তোমাকে নাম টাইপ করার সুযোগ না দিয়েই পরের লাইনে চলে যায়।

   ২. স্পেস কী কাজ করে?
   scanf(" %[^\n]", name); এখানে % এর আগে স্পেস দেওয়া মানে হলো কম্পিউটারকে বলা—

  "আগে থেকে যদি মেমোরিতে কোনো ফাঁকা জায়গা (Space), ট্যাব (Tab) বা এন্টার (\n) জমা থাকে, তবে সেগুলোকে ঝেঁটিয়ে বিদায় করো। যখনই তুমি কোনো আসল অক্ষর (যেমন A, B, C...) পাবে, তখন থেকে ইনপুট নেওয়া শুরু করো।"

    printf("Enter your subject: ");
    scanf(" %[^\n]", subject);
    
    printf("Enter your balance: ");
    scanf("%lf", &accountBalance);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("\n---------Your output--------------\n");
    // প্রতিটি লাইনের শেষে \n দেওয়া হয়েছে যাতে আউটপুট সুন্দর হয়
    printf("Your name is: %s\n", name);
    printf("Your age is: %d\n", age);
    printf("Your height is: %.1f\n", height);
    printf("Your address is: %s\n", address);
    printf("Your phone number is: %s\n", phoneNumber);
    printf("Your subject is: %s\n", subject);
    printf("Your Account Balance is: %.2lf\n", accountBalance); // ২ দশমিক ঘর পর্যন্ত
    printf("Your grade is: %c\n", grade);
    printf("Your cgpa is: %.2f\n", cgpa);

    return 0;
}


---------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {
   char name1[30], name2[30], phone1[15], phone2[15];
   int id1, id2;

   printf("Enter first person name: ");
   scanf(" %[^\n]", name1);

   printf("Enter Id: ");
   scanf("%d", &id1);
   getchar(); 

   printf("Enter phone number: ");
   scanf(" %[^\n]", phone1);

   printf("---------------------\n");

   printf("Enter second person name: ");
   scanf(" %[^\n]", name2);

   printf("Enter Id: ");
   scanf("%d", &id2);
   getchar(); 

   printf("Enter phone number: ");
   scanf(" %[^\n]", phone2);

   printf("\n---------- Final Output ----------\n");

   printf("%-15s %-10s %-15s\n", "Name", "Id", "Phone");
   printf("-------------------------------------------\n");

   printf("%-15s %-10d %-15s\n", name1, id1, phone1);
   printf("%-15s %-10d %-15s\n", name2, id2, phone2);

   return 0;
}

......................

#include <stdio.h>
#include <string.h>

int main() {
   char name1[40], name2[40], phone1[20], phone2[20];
   char id1, id2; // তুমি যেহেতু %c দিয়েছ, তাই char ব্যবহার করা হয়েছে

   // --- ১ম ব্যক্তির ইনপুট ---
   printf("Enter first person name: ");
   fgets(name1, sizeof(name1), stdin);
   name1[strcspn(name1, "\n")] = 0; // বাড়তি Newline মুছে ফেলা

   printf("Enter first person phone number: ");
   fgets(phone1, sizeof(phone1), stdin);
   phone1[strcspn(phone1, "\n")] = 0;

   printf("Enter first person Id: ");
   scanf(" %c", &id1); 

    while (getchar() != '\n'); 

   printf("-------------------------\n");

   // --- ২য় ব্যক্তির ইনপুট ---
   printf("Enter second person name: ");
   fgets(name2, sizeof(name2), stdin);
   name2[strcspn(name2, "\n")] = 0;

   printf("Enter second person phone number: ");
   fgets(phone2, sizeof(phone2), stdin);
   phone2[strcspn(phone2, "\n")] = 0;

   printf("Enter second person Id: ");
   scanf(" %c", &id2);

     while (getchar() != '\n'); 


   printf("\n----- First Person Output ---------------\n");
   printf("First person name  : %s\n", name1);
   printf("First person phone : %s\n", phone1);
   printf("First Id           : %c\n", id1);

   printf("\n----- Second Person Output ---------------\n");
   printf("Second person name : %s\n", name2);
   printf("Second person phone: %s\n", phone2);
   printf("Second Id          : %c\n", id2);

   return 0;
}
--------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
  // ১. মেমোরি অপ্টিমাইজেশন (সাইজগুলো একটু বাড়িয়ে দেওয়া নিরাপদ)
  char name[40], address[70], subject[50], phoneNumber[20], grade;
  int age;
  float height, cgpa;
  double accountBalance;

  // ২. ইনপুট বাফার পরিষ্কার রাখা এবং ফরম্যাটিং
  printf("Enter your name: ");
  scanf(" %39[^\n]", name);  //scanf এর ভেতরে ফরম্যাট স্পেসিফায়ারের আগে একটি স্পেস দিলে তা কম্পিউটারকে বলে:
 \\"আগের কোনো White Space (যেমন: Enter, Space, বা Tab) যদি মেমোরিতে জমা থাকে, তবে সেগুলোকে ইগনোর (Ignore) করো এবং যতক্ষণ না ইউজার নতুন কোনো আসল অক্ষর টাইপ করছে ততক্ষণ অপেক্ষা করো।"
  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your height: ");
  scanf("%f", &height);

  printf("Enter your address: ");
  scanf(" %69[^\n]", address);
    
১. " এর পরের Space (স্পেস)
এটি অত্যন্ত গুরুত্বপূর্ণ। যখন তুমি আগের কোনো ইনপুটে (যেমন বয়স বা নম্বর) Enter চাপো, তখন মেমোরিতে একটি \n (Newline) ক্যারেক্টার রয়ে যায়।

কাজ: এই স্পেসটি কম্পিউটারকে বলে—"আগের যদি কোনো Enter বা ফাঁকা জায়গা মেমোরিতে থাকে, তবে সেগুলোকে ঝেঁটিয়ে পরিষ্কার করো। যতক্ষণ না ইউজার নতুন কোনো আসল অক্ষর টাইপ করছে, ততক্ষণ পর্যন্ত অপেক্ষা করো।"

না দিলে কী হবে? আগের Enter টিকেই সে ইনপুট হিসেবে নিয়ে নেবে এবং তোমাকে ঠিকানা টাইপ করার সুযোগই দেবে না।

২. % (পারসেন্ট চিহ্ন)
এটি একটি Format Specifier এর শুরু। এটি কম্পিউটারকে সংকেত দেয় যে—"সাবধান! এখন তোমাকে একটি বিশেষ নিয়মে ডাটা বা তথ্য গ্রহণ করতে হবে।"

    
  printf("Enter your phone number: ");
  scanf(" %19[^\n]", phoneNumber);

  printf("Enter your subject: ");
  scanf(" %49[^\n]", subject);

  printf("Enter your balance: ");
  scanf("%lf", &accountBalance);

  printf("Enter your grade: ");
  scanf(" %c", &grade);

  printf("Enter your cgpa: ");
  scanf("%f", &cgpa);

  printf("\n================ STUDENT PROFILE ================\n");
  printf("%-20s : %s\n", "Name", name);
  printf("%-20s : %d Years\n", "Age", age);
  printf("%-20s : %.1f Feet\n", "Height", height);
  printf("%-20s : %s\n", "Address", address);
  printf("%-20s : %s\n", "Phone", phoneNumber);
  printf("%-20s : %s\n", "Subject", subject);
  printf("%-20s : $%.2lf\n", "Account Balance", accountBalance);
  printf("%-20s : %c\n", "Grade", grade);
  printf("%-20s : %.2f\n", "CGPA", cgpa);
 
  return 0;
}




