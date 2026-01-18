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