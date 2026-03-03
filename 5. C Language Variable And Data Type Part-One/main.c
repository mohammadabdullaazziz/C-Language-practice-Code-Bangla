#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mohammad";
    strcpy(name, "Abdullah\n");
    printf("My name is: %s", name);

    float age = 29.6;
    printf("My age is: %f\n", age);
    int salary = 10000;
    printf("My Salary is: %d\n", salary);
    int num1, num2;
    num1 = num2 = 40;
    printf("My First Number: %d\n", num1);
    printf("My Second Number: %d\n", num2);
    char grade = 'A';
    printf(grade);
    return 0;
}

//int num3, num4;
//int num3 = 50, num4 = 60;

-------------------------------------------------------------------
#include <stdio.h>
int main() {

    char name[] = "Mohammad Abdullah";
    char address[] = "Gongachora, Rangpur";
    char subject[] = "Programming";
    char grade = 'A';

    int age = 30;
    float height = 5.2f;
    float cgpa = 3.50f;
    double accountBalance = 54.26456563;

    printf("-------- Student Information --------\n");

    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.1f ft\n", height);
    printf("Address: %s\n", address);
    printf("Subject: %s\n", subject);
    printf("Grade: %c\n", grade);
    printf("CGPA: %.2f\n", cgpa);
    printf("Account Balance: $%.2lf\n", accountBalance);

    return 0;
}

String ডিক্লেয়ার করার সময় সাইজ ফিক্সড না করে [] দেওয়া ভালো 
স্ট্রিং সাইজ ([]): ধরা যাক char name[45] । এতে মেমোরিতে ৪৫টি ক্যারেক্টারের জায়গা দখল হয়। যদি নাম ছোট হয়, তবে বাকি জায়গা নষ্ট হয়। char name[] ব্যবহার করলে সি-কম্পাইলার নামের দৈর্ঘ্য অনুযায়ী নিজে থেকেই সঠিক জায়গা বরাদ্দ করে নেয়। 
    
✅ সুবিধা:

ভুল হওয়ার সম্ভাবনা কম

নিজে size গুনতে হয় না

Safe ও clean code 

String ডিক্লেয়ার করার সময় সাইজ ফিক্সড কখন করে [] দেওয়া ভালো---------------------------

১. কেন এবং কখন [] (খালি রাখা) ভালো?

যখন ভেরিয়েবল ডিক্লেয়ার করার সময় সাথে সাথেই কোনো মান (String Value) দিয়ে দেওয়া হয় , তখন [] ব্যবহার করা সবচেয়ে ভালো।

কেন?

মেমোরি সাশ্রয়: কম্পাইলার নিজে গুনে দেখে ঠিক কয়টি অক্ষর আছে এবং মেমোরিতে শুধু ততটুকু জায়গাই নেয়।

ভুলের ঝুঁকি নেই: তোমাকে নিজে গুনে সাইজ লিখতে হয় না, তাই ভুল হওয়ার ভয় থাকে না।

char name[] = "Mohammad Abdullah"; // কম্পাইলার নিজে সাইজ ১৭+১ (নাল ক্যারেক্টার) ধরে নেবে।

কখন সাইজ ফিক্সড করা (যেমন [50]) ভালো?------------------------------------
    
যখন ভেরিয়েবল ডিক্লেয়ার করার সময় কোনো মান দেওয়া হসচ্ছেনা, বরং পরে ব্যবহারকারীর কাছ থেকে ইনপুট নেওয়া হবে, তখন সাইজ ফিক্সড করা বাধ্যতামূলক।
কেন?
জায়গা রিজার্ভ করা: ব্যবহারকারী কত বড় নাম লিখবে তা তো কম্পিউটার আগে থেকে জানে না। তাই তোমাকে আগেই একটি বড় জায়গা (যেমন ৫০ বা ১০০ অক্ষরের) মেমোরিতে বুক করে রাখতে হয়।

বাফার ওভারফ্লো রোধ: তুমি যদি সাইজ না দাও বা খুব ছোট সাইজ দাও, আর ইউজার যদি বড় ইনপুট দেয়, তবে প্রোগ্রাম ক্রাশ করবে। 

char userName[50]; // ৫০ অক্ষরের জন্য জায়গা খালি করে রাখা হলো।
printf("Enter your name: ");
scanf("%s", userName); // এখন ইউজার ৫০ অক্ষরের মধ্যে যেকোনো নাম দিতে পারবে।



#include <stdio.h>
   int main() {
   int num1 = 10, num2 = 20, num3; 
   num3 = num1; 
   num1 = num2; 
   num2 = num3; 
   printf("Result is: num1 = %d, num2 = %d\n", num1, num2);
   return 0;
   
}
