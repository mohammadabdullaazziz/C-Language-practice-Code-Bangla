// user input
#include <stdio.h>

int main()
{    
    //int num;
    // printf("Enter an integer: ");
    // scanf("%d", &num);
    // printf("%d\n", num);
  //------------------------------------
    // int num1, num2;
    // printf("Enter first integer: ");
    // scanf("%d", &num1);
    // printf("Enter second integer: ");
    // scanf("%d", &num2);

    // printf("Numbers are:\n%d\n%d", num1, num2);
    // printf("%d\n%d", num1, num2);
  //--------------------------------------------
    // int num1, num2;
    // printf("Enter two integer: ");
    // scanf("%d %d", &num1, &num2);
    // printf("Numbers are: \n%d\n%d", num1, num2);
    //---------------------------------------------
    int age;
    float height;
    printf("Enter your age and height: ");
    scanf("%d %f", &age, &height);
    printf("Your age: %d and\nyour height: %.1f", age, height);
    return 0;
}




#include <stdio.h>
#include <string.h>

int main() {
    char email[80];
    char gender[25];

    // ইমেইল ইনপুট
    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    // বাড়তি Newline (\n) রিমুভ করা
    email[strcspn(email, "\n")] = 0;

    // জেন্ডার ইনপুট
    printf("Enter your gender (Male/Female): ");
    fgets(gender, sizeof(gender), stdin);
    // বাড়তি Newline (\n) রিমুভ করা
    gender[strcspn(gender, "\n")] = 0;

    printf("\n------------ Output ------------\n");

    // এখন আউটপুট সুন্দরভাবে এক লাইনে আসবে
    printf("Your email : %s\n", email);
    printf("Your gender: %s\n", gender);

    return 0;
}

