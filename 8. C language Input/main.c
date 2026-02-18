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

    // ২. ইউজার থেকে ইনপুট নেওয়া (ভালো প্র্যাকটিস)
    printf("Enter your name: ");
    scanf(" %[^\n]s", name); // স্পেসসহ নাম নেওয়ার জন্য %[^\n] ব্যবহার করা হয়েছে

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

    // বাফার ক্লিয়ার করা (scanf এর পরের Enter খেতে)
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
    printf("------------------------------------------------------------\n");
    printf("%-20s: %-10s | %-10s: %d\n", "Name", name, "Age", age);
    printf("%-20s: %-10.1f | %-10s: %s\n", "Height", height, "Village", village);
    printf("%-20s: %-10s | %-10s: %.2f\n", "Subject", subject, "CGPA", cgpa);
    printf("%-20s: %-10c\n", "Grade", grade);
    printf("------------------------------------------------------------\n");

    return 0;
}
