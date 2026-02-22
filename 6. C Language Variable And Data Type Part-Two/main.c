#include <stdio.h>
int main() {
    // variable declaration
    int num1;
    int num2;
    float num3;
    double num4;
    char ch;
    // variable initialization
    num1 = 10;
    num2 = 20;
    num3 = 10.2;
    num4 = 10.2535158;
    ch = 'A';
    return 0;
}

#include <stdio.h>
int main() {
    int myNum = 15;

    int myOtherNum = 23;

    myNum = myOtherNum;

    printf("%d", myNum);
    return 0;
}

// Declare Multiple Variables

int x, y, z;
x = y = z = 50;
printf("%d", x + y + z);

// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Print variables
printf("Student id: %d\n", studentID);
printf("Student age: %d\n", studentAge);
printf("Student fee: %f\n", studentFee);
printf("Student grade: %c", studentGrade);

// Create integer variables
int length = 4;
int width = 6;
int area;

// Calculate the area of a rectangle
area = length * width;

// Print the variables
printf("Length is: %d\n", length);
printf("Width is: %d\n", width);

printf("Area of the rectangle is: %d", area);



#include <stdio.h>
#include <string.h>

int main() {
    // ১. ডিক্লেয়ারেশন এবং ইনিশিয়ালাইজেশন একসাথে করা (Clean Code)
    char name[30] = "Mohammad";
    int age = 30; 
    float height = 5.2f;
    char village[] = "Changmary";
    char subject[] = "Programming";
    char grade = 'A';
    float cgpa = 3.50f;
    int num1 = 20, num2 = 30;
    
    strcpy(name, "Abdullah Aziz");

    printf("--------- Your Profile ---------\n");
    
    printf("Name     : \"%s\"\n", name); // কোটেশন প্রিন্ট করার জন্য \" ব্যবহার
    printf("Age      : %d Years\n", age);
    printf("Height   : %.1f Feet\n", height);
    printf("Location : %s\n", village);
    printf("Subject  : %s\n", subject);
    printf("Result   : Grade %c (CGPA: %.2f)\n", grade, cgpa);
    
    printf("--------------------------------\n");
    printf("Numbers  : %d, %d\n", num1, num2);

    return 0;
}

১. Variable Initializing: তুমি প্রথমে age = 25 দিয়ে পরে 30 করেছ। যদি ২৫ এর প্রয়োজন না থাকে, তবে সরাসরি ৩০ ডিক্লেয়ার করা মেমোরি ও সময় বাঁচায়।

২. String Buffer Size: char name[] এভাবে দিলে এটি শুরুর শব্দের সাইজ নেয়। পরে বড় নাম কপি করলে strcpy তে বাফার ওভারফ্লো হতে পারে। তাই char name[30] বা নির্দিষ্ট সাইজ দেওয়া নিরাপদ।

৩. Escaping Quotes: তুমি strcpy এর ভেতর ম্যানুয়ালি কোটেশন দিয়েছ। কিন্তু প্রিন্ট করার সময় \"%s\" ব্যবহার করলে কোডটি দেখতে বেশি পরিষ্কার লাগে।

৪. Alignment (প্রান্তিকরণ): আমি printf এর ভেতর স্পেস ব্যবহার করে ক্লোনগুলো (:) এক লাইনে এনেছি। এতে আউটপুটটি দেখতে অনেক বেশি প্রফেশনাল লাগে।

৫. f Suffix: float ভ্যালুর শেষে f (যেমন: 3.50f) লেখা ভালো অভ্যাস। না লিখলে সি কম্পাইলার এটিকে double হিসেবে ধরে নিয়ে পরে float-এ কনভার্ট করে।
