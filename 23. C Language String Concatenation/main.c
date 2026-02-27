#include <stdio.h>
#include <string.h>
int main()
{
   // char firstName[30] = "Mohammad ";
   // char lastName[] = "Abdullah";
   // strcat(firstName, lastName);
   // printf("Name : %s\n", firstName);

   char firstName[30] = "Mohammad";
   char lastName[] = "Abdullah";
   strcat(firstName, " ");
   strcat(firstName, lastName);
   printf("Name : %s\n", firstName);
   return 0;

}

char firstName[50] = "Mohammad";             //Right
strcat(firstName, " ");
strcat(firstName, "Abdullah");
printf("Name : %s\n", firstName);

char firstName[50] = "Mohammad";             // Rong
strcat("My name is", firstName, "Abdullah");
printf("Name : %s\n", firstName);

strcat() মাত্র ২টা parameter নেয় কিন্তু ৩টা দেয়া হয়েছে ❌

#include <stdio.h>
#include <string.h>

int main() {

    char result[50] = "My name is ";
    char firstName[] = "Mohammad";
    char lastName[] = " Abdullah";

    strcat(result, firstName);
    strcat(result, lastName);

    printf("Name: %s\n", result);

    return 0;
}

৩টা argument	strcat ২টা নেয়
string literal destination	modify করা যায় না
ছোট array	overflow হবে 



#include <stdio.h>
#include <string.h> // স্ট্রিং ফাংশনের জন্য এটি প্রয়োজন

int main() {
    char str1[50] = "Hello "; // প্রথম স্ট্রিং (যথেষ্ট বড় জায়গা রাখতে হবে)
    char str2[] = "World!";    // দ্বিতীয় স্ট্রিং

    // str1 এর সাথে str2 জোড়া দেওয়া হচ্ছে
    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}



strcat(destination, source)

✅ 1️⃣ destination (যেখানে যোগ হবে)

যে string-এর শেষে নতুন লেখা যোগ হবে

এটা অবশ্যই array হতে হবে

যথেষ্ট জায়গা থাকতে হবে

✅ 2️⃣ source (যেটা যোগ হবে)

যে string যোগ করতে চাই

এটা পরিবর্তন হয় না

👉 source string-এর সব অক্ষর
👉 destination-এর শেষে গিয়ে বসে 
   
destination = যে রাখবে
source      = যে যাবে 
-----------------------------
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // newline remove
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    strcat(str1, str2);

    printf("Final string: %s\n", str1);

    return 0;
}

মাঝখানে Space দিয়ে যোগ করা
#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50];

    printf("Enter First Name: ");
    fgets(first, sizeof(first), stdin);

    printf("Enter Last Name: ");
    fgets(last, sizeof(last), stdin);

    first[strcspn(first, "\n")] = 0;
    last[strcspn(last, "\n")] = 0;

    strcat(first, " ");
    strcat(first, last);

    printf("Full Name: %s\n", first);

    return 0;
}
------------------------------------------------------------------------------------------

strncat() (Safe version)
   
C-এ strncat(dest, src, n)
👉 src থেকে সর্বোচ্চ n টি অক্ষর নিয়ে dest-এর শেষে যোগ করে।
⚠️ dest array-এর সাইজ যথেষ্ট বড় হতে হবে। 

নির্দিষ্ট 5 অক্ষর যোগ
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World123";

    strncat(str1, str2, 5);

    printf("Result: %s\n", str1);
    return 0;
} 

n ছোট হলে 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Good ";
    char str2[] = "Morning";

    strncat(str1, str2, 3);

    printf("Result: %s\n", str1);
    return 0;
}

n বড় হলে (src ছোট) 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hi ";
    char str2[] = "All";

    strncat(str1, str2, 10);

    printf("Result: %s\n", str1);
    return 0;
} 

user input----------

#include <stdio.h>                
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf(" %49[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %49[^\n]", str2);

    strncat(str1, str2, 4);         👉 এখানে দ্বিতীয় string থেকে ৪ অক্ষর যোগ হবে।

    printf("After concatenation: %s\n", str1);

    return 0;
} 

বিষয়	ব্যাখ্যা
strncat() কী করে?	n অক্ষর যোগ করে
null (\0) যোগ করে?	✅ হ্যাঁ
buffer বড় না হলে?	⚠️ crash হতে পারে 



strncat(গন্তব্য, উৎস, কয়টি অক্ষর);

