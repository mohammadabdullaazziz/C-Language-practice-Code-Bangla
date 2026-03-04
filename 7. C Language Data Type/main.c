
/*Types of Data Types

1. Basic Data Type

int,
float, double, char

2. Derived Data Type

Array, Pointer, Structure, Union

3. Enumeration Data Type

4. Void Data Type*/

#include <stdio.h>
int main() {
    // Create variables
    int num1 = 5; // Integer (whole number)
    int num2 = 10;
    float myFloatNum = 5.99; // Floating point number
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


#include <stdio.h>

int main() {

    char name[30] = "Abdullah Aziz";
    int age = 30;
    float height = 5.2;
    char village[] = "Changmary";
    char subject[] = "Programming";
    char grade = 'A';
    float cgpa = 3.50;
    int num1 = 20, num2 = 30;

    printf("--------- Your Output ---------\n");
    printf("My name is: %s\n", name);
    printf("My age is: %d\n", age);
    printf("My height is: %.1f\n", height);
    printf("My village is: %s\n", village);
    printf("My subject is: %s\n", subject);
    printf("My grade is: %c\n", grade);
    printf("My cgpa is: %.2f\n", cgpa);
    printf("Num1 is: %d and Num2 is: %d\n", num1, num2);

    return 0;
}


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


profesonal --------------
    
#include <stdio.h>
#include <string.h> // strcspn ফাংশন ব্যবহার করার জন্য

int main() {
    char name[50], village[50], subject[50], grade;
    int age, num1, num2;
    float height, cgpa;

    // ১. নাম ইনপুট
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // বাড়তি Newline মুছে ফেলার ম্যাজিক লাইন

    // ২. বয়স ও উচ্চতা
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);

    getchar(); // বাফার পরিষ্কার করার জন্য (পরবর্তী fgets এর জন্য জরুরি)

    // ৩. গ্রাম ইনপুট
    printf("Enter your village: ");
    fgets(village, sizeof(village), stdin);
    village[strcspn(village, "\n")] = 0;

    // ৪. সাবজেক্ট ইনপুট
    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strcspn(subject, "\n")] = 0;

    // ৫. গ্রেড ও সিজিপিএ
    printf("Enter your grade: ");
    scanf(" %c", &grade); // ' ' স্পেসটি বাফার ক্লিয়ার রাখে
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    // ৬. দুটি সংখ্যা
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // --------- ফাইনাল আউটপুট ---------
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
