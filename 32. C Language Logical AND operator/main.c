C ল্যাঙ্গুয়েজে Logical AND operator (&&) মূলত দুটি শর্ত (Condition) একসাথে চেক করার জন্য ব্যবহার করা হয়। এটি তখনই সত্য হয়, যখন এর দুই পাশের উভয় শর্তই সত্য (True) থাকে। যদি একটিও মিথ্যা (০) হয়, তবে পুরো ফলাফল মিথ্যা।
যদি দেখে প্রথম শর্তটিই মিথ্যা (False), তবে সে দ্বিতীয় শর্তটি আর চেকই করে না! কারণ প্রথমটি মিথ্যা হলে পুরো ফলাফল কখনোই সত্য হওয়া সম্ভব নয়।
সংকেত: একে দুইবার অ্যামপারস্যান্ড (&&) চিহ্ন দিয়ে লিখতে হয়। সি (C) ল্যাঙ্গুয়েজে Logical AND Operator (&&) একটি বাইনারি অপারেটর।

সত্য (True)	সত্য (True)	------- সত্য (True)
সত্য (True)	মিথ্যা (False)-------	মিথ্যা (False)
মিথ্যা (False)	সত্য (True)------	মিথ্যা (False)
মিথ্যা (False)	মিথ্যা (False)-----	মিথ্যা (False)


&& (AND) অপারেটর প্রথমে True খোঁজে না, বরং সে প্রথমে দেখে প্রথম শর্তটি False কি না। && অপারেটর প্রথমে True খোঁজে না, বরং সে চেক করে প্রথমটা True কি না।
&& অপারেটর বাম দিক থেকে চেক করা শুরু করে।

যদি সে দেখে প্রথম শর্তটিই False (0), তবে সে আর এক মুহূর্তও দেরি করে না। ডান দিকের বাকি শর্তগুলো চেক না করেই সরাসরি বলে দেয়— "পুরো রেজাল্ট False"।

সে কেবল তখনই দ্বিতীয় শর্তটি চেক করতে যায়, যদি প্রথমটি True হয়।

if ( 0 && 10 > 5 )
এখানে প্রথম শর্তটিই 0 (False)। কম্পিউটার কিন্তু আর দেখবেও না যে পাশে 10 > 5 আছে কি না। সে সরাসরি ওখান থেকেই বিদায় নেবে।

সি ল্যাঙ্গুয়েজে লজিক্যাল অপারেটরগুলো (&&, ||) সবসময় ফলাফল হিসেবে শুধু ০ (False) অথবা ১ (True) রিটার্ন করে।

#include <stdio.h>
int main(){

    printf("Result 1: %d\n", 0 && 5 && 6); // এখানে উত্তর আসবে 0 (False)
    printf("Result 2: %d\n", 4 && 1 && 9); // এখানে উত্তর আসবে 1 (True)
    return 0;
}




#include <stdio.h>
int main() {
    int id = 101;
    int pass = 1234;

    // && অপারেটর ব্যবহার করে দুটি শর্ত একসাথে চেক
    if (id == 101 && pass == 1234) {
        printf("Login Successful!\n");
    } else {
        printf("Login Failed!\n");
    }

    return 0;
}


#include <stdio.h>
int main() {
    int attendance = 85; 
    int marks = 45;      
    if (attendance > 80 && marks > 40) {
        printf("Congratulations! You passed.\n");
    } else {
        printf("Sorry! You failed.\n");
    }

    return 0;
}


int a = 0;
int b = 10;

if (a > 5 && b++ > 5) {
    // কিছু হবে না
}
printf("b এর মান: %d", b);

এখানে আউটপুট আসবে b এর মান: 10 (১১ নয়!)। কারণ a > 5 মিথ্যা হওয়ায় কম্পিউটার b++ অংশটি আর স্পর্শই করেনি। একেই বলে Short-circuiting।


#include <stdio.h>
#include <string.h> // এই হেডার ফাইলটি লাগবেই
int main() {
    char userName[] = "abcd";
    char userRoll[] = "moderator";

    // strcmp() যদি ০ রিটার্ন করে, তার মানে স্ট্রিং দুটি হুবহু মিলেছে
    if (strcmp(userName, "abcd") == 0 && strcmp(userRoll, "moderator") == 0) {
        printf("Login Successful!\n");
    } else {
        printf("Login Failed!\n");
    }

    return 0;
}
