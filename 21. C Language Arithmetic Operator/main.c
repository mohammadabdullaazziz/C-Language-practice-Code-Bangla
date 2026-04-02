C ল্যাঙ্গুয়েজে Arithmetic Operators বা গাণিতিক অপারেটরগুলো ব্যবহার করা হয় সাধারণ গণিতের কাজগুলো (যেমন: যোগ, বিয়োগ, গুণ, ভাগ) করার জন্য

/*

Arithmetic Operators
+ addition or unary plus 
- subtraction or unary minus 
* multiplication 
/ division 
% remainder after division(modulo division)

*/

#include <stdio.h>
#include <string.h>
int main()
{
  int a = 9, b = 4, c;

  c = a + b;
  printf("a+b = %d \n", c);
  c = a - b;
  printf("a-b = %d \n", c);
  c = a * b;
  printf("a*b = %d \n", c);
  c = a / b;
  printf("a/b = %d \n", c);
  c = a % b;
  printf("Remainder when a divided by b = %d \n", c);
  return 0;
}

#include <stdio.h>

int main() {
    int num1, num2;
    float average;

    // ১. ইউজার থেকে দুটি সংখ্যা ইনপুট নেওয়া
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // ২. গড় বের করার লজিক
    // (float) ব্যবহার করা হয়েছে যাতে ভাগফল দশমিকসহ নিখুঁত আসে
    average = (float)(num1 + num2) / 2;

    // ৩. ফলাফল প্রিন্ট করা
    printf("\nThe average of %d and %d is: %.2f\n", num1, num2, average);

    return 0;
} 


#include <stdio.h>

int main() {
    int n1, n2, n3;
    float avg;

    // ১. ইউজার থেকে ৩টি সংখ্যা ইনপুট নেওয়া
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // ২. গড় বের করার সূত্র
    // (float) ব্যবহার করা হয়েছে যাতে ভাগফল দশমিকসহ নিখুঁত আসে
    avg = (float)(n1 + n2 + n3) / 3;

    // ৩. ফলাফল দেখানো (দশমিকের পর ২ ঘর পর্যন্ত)
    printf("\nThe Average of %d, %d, and %d is: %.2f\n", n1, n2, n3, avg);

    return 0;
}





#include <stdio.h>

int main()
{
    int num1, num2, sum;
    double average; 

    printf("Enter first number : ");
    scanf("%d", &num1); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

   //(Type Casting)
    average = (double)sum / 2;

    printf("\n--- Result ---\n");
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Average: %.2lf\n", average);

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2;
  
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Output Results ---\n");
    printf("Addition      : %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction   : %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // (Division by zero check)
    if (num2 != 0) {
        printf("Division      : %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulo (%%)    : %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division/Modulo: Not possible when second number is 0\n");
    }

    return 0;
}


int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1


user input-----------------
#include <stdio.h>
#include <stdbool.h> // bool, true, false ব্যবহার করার জন্য

int main() {
    char name[31];
    int age;
    int input_married; // ইউজার থেকে ০ বা ১ নেওয়ার জন্য
    bool married;      // লজিক্যাল কাজের জন্য

    // ১. নাম ইনপুট (নিরাপদ পদ্ধতি)
    printf("Enter your name (max 30 chars): ");
    scanf(" %30[^\n]", name);

    // ২. বয়স ইনপুট
    printf("Enter your age: ");
    scanf("%d", &age);

    // ৩. বৈবাহিক অবস্থা ইনপুট (০ বা ১)
    printf("Are you married? (1 for Yes, 0 for No): ");
    scanf("%d", &input_married);
    
    // integer ইনপুটকে boolean-এ রূপান্তর
    married = (input_married == 1); 

    // ৪. আউটপুট সেকশন
    printf("\n--- User Profile ---\n");
    printf("%-15s: %s\n", "Name", name);
    printf("%-15s: %d\n", "Age", age);
    
    // boolean চেক করে টেক্সট প্রিন্ট করা
    printf("%-15s: %s\n", "Status", married ? "Married" : "Unmarried");

    return 0;
} 



#include <stdio.h>

int main() {
    // ১. প্রয়োজনীয় ভেরিয়েবল ডিক্লেয়ারেশন (বাকিগুলো মুছে ফেলা হয়েছে)
    char name[30];
    int age;
    float cgpa;

    // ২. নাম ইনপুট (সর্বোচ্চ ২৯ ক্যারেক্টার কারণ ১টি \0 এর জন্য)
    printf("Enter your name (max 29 chars): ");
    if (scanf(" %29[^\n]", name) != 1) {
        printf("Invalid input for name!\n");
        return 1; // এরর থাকলে প্রোগ্রাম বন্ধ হবে
    }

    // ৩. বয়স ইনপুট এবং ভ্যালিডেশন
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Error: Age must be an integer.\n");
        return 1;
    }

    // ৪. CGPA ইনপুট এবং ভ্যালিডেশন
    printf("Enter your CGPA: ");
    if (scanf("%f", &cgpa) != 1) {
        printf("Error: Invalid CGPA format.\n");
        return 1;
    }

    // ৫. আউটপুট সেকশন (সুন্দর ফরম্যাটে)
    printf("\n===================================\n");
    printf("       STUDENT INFORMATION\n");
    printf("===================================\n");
    printf("%-15s: %s\n", "Name", name);
    printf("%-15s: %d Years\n", "Age", age);
    printf("%-15s: %.2f\n", "CGPA", cgpa);
    printf("===================================\n");

    return 0;
}

#include <stdio.h>
#include <stdbool.h> // bool, true, false ব্যবহার করার জন্য

int main() {
    char name[31];
    int age;
    int input_married; // ইউজার থেকে ০ বা ১ নেওয়ার জন্য
    bool married;      // লজিক্যাল কাজের জন্য

    // ১. নাম ইনপুট (নিরাপদ পদ্ধতি)
    printf("Enter your name (max 30 chars): ");
    scanf(" %30[^\n]", name);

    // ২. বয়স ইনপুট
    printf("Enter your age: ");
    scanf("%d", &age);

    // ৩. বৈবাহিক অবস্থা ইনপুট (০ বা ১)
    printf("Are you married? (1 for Yes, 0 for No): ");
    scanf("%d", &input_married);
    
    // integer ইনপুটকে boolean-এ রূপান্তর
    married = (input_married == 1); 

    // ৪. আউটপুট সেকশন
    printf("\n--- User Profile ---\n");
    printf("%-15s: %s\n", "Name", name);
    printf("%-15s: %d\n", "Age", age);
    
    // boolean চেক করে টেক্সট প্রিন্ট করা
    printf("%-15s: %s\n", "Status", married ? "Married" : "Unmarried");

    return 0;
}
