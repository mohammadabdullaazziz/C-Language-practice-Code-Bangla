#include <stdio.h>
int main()
{
    printf("My name is Abdullah\n");
    printf("I live in Bangladesh");
    return 0;
}

Comments
--------

// Single-line Comment:  //

// Multi-line Comment: /*  */

Escape sequence
---------------

 // use of \n
#include <stdio.h>
int main() {
    printf("Hello World!\n");
    printf("I am learning C.\n");
    printf("One\nTwo\nThree");

    return 0;
}


// use of \t
    printf("Name\tRoll\tSubject\n");
    printf("---------------------------\n");
    printf("Mohammad\t1\tMath\n");
    printf("Abdullah\t2\tScience\n");

    return 0;

// use of \"
#include <stdio.h>

int main() {
    printf("My favorite book is \"Al-Koran\".\n");
    printf("The teacher said, \"Be honest.\"");

    return 0;
}

// use of \\
#include <stdio.h>

int main() {
    printf("Backslash looks like this: \\ \n");
    printf("Folder path: D:\\MyFiles\\C_Programs /n");
    printf("The file location is: C:\\Windows\\System32");
    return 0;
}
