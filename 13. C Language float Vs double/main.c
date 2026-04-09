
//float Data Types
#include <stdio.h>
#include <strings.h>
   int main() {
   float a = 123.123456789;

   printf("float value = %.9f\n", a); //wrong output: 123.123458862;
   return 0;
}

//double Data Types
#include <stdio.h>

int main()
{
   double b = 123.123456789123456;

   printf("double value = %.15lf\n", b); //wrong output: 123.123456789123450
   return 0;
}

//right output

/*
//float Data Types
#include <stdio.h>
#include <strings.h>
   int main() {
   float a = 123.123456789;

   printf("float value = %.5f\n", a);
   return 0;
}

//double Data Types
#include <stdio.h>

int main()
{
   double b = 123.123456789123456;

   printf("double value = %.9lf\n", b);
   return 0;
}

*/


১. রাউন্ডিংয়ের "গোল্ডেন রুল"
প্রোগ্রামিংয়ে যখন দশমিকের ঘর নির্দিষ্ট করে দেওয়া হয়, তখন কম্পিউটার সবসময় তার পরের ঘরটি (Next Digit) চেক করে।
   
সংখ্যা: 123.12342 6 789

এখানে ৫ম ঘর হলো: 2

এবং ৬ষ্ঠ ঘর (যেটি বাদ পড়বে) হলো: 6

নিয়মটি হলো: যদি বাদ পড়া প্রথম ঘরটি ৫ বা তার বেশি হয়, তবে আগের ঘরের সাথে ১ যোগ হবে।
যেহেতু এখানে ৬ষ্ঠ ঘরটি 6, যা ৫-এর চেয়ে বড়, তাই এটি ৫ম ঘরের 2-এর সাথে ১ যোগ করে সেটিকে 3 বানিয়ে দিয়েছে।

৩. যদি ৬ না হয়ে ৪ হতো?
যদি কোডটি এমন হতো: float a = 123.123424...
তাহলে ৬ষ্ঠ ঘরটি হতো 4। যেহেতু ৪ সংখ্যাটি ৫-এর ছোট, তাই কম্পিউটার কিছুই যোগ করত না। তখন আউটপুট আসত: 123.12342
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
double-এর ক্ষেত্রেও ঠিক একই নিয়ম কাজ করে। সি ল্যাঙ্গুয়েজে float, double বা long double—সব ধরনের ডেসিমাল (দশমিক) ডাটা টাইপের জন্যই printf একই রাউন্ডিং (Rounding) নিয়ম অনুসরণ করে।

#include <stdio.h>
int main() {
    double x = 123.123426789; // এখানেও ৫ম ঘরের পরে ৬ আছে
    double y = 123.123424789; // এখানে ৫ম ঘরের পরে ৪ আছে

    printf("Result 1 (Round Up):   %.5lf\n", x); 
    printf("Result 2 (No Change):  %.5lf\n", y);

    return 0;
}
