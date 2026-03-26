
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
#include <string.h> // strcspn ব্যবহারের জন্য

int main() {
    char name[50], address[50], subject[30], bloodGroup[5], grade;
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

    printf("Enter your grade: ");
    scanf(" %c", &grade); // স্পেস দিয়ে ইনপুট নিলে বাফার সমস্যা কম হয়

    // এখানে একটি getchar() লাগবে কারণ উপরের scanf একটি '\n' ছেড়ে দিয়েছে
    getchar(); 

    printf("Enter your blood group: ");
    fgets(bloodGroup, sizeof(bloodGroup), stdin);

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
