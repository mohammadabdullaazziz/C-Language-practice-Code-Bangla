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




#include <stdio.h>
#include <string.h>
int main()
{  //user input
   int num1, num2, num3;
   printf("Enter first integer number: ");
   scanf("%d", &num1);
   printf("Enter second integer number: ");
   scanf("%d", &num2);

   num3 = num2;
   num2 = num1;
   num1 = num3;

   printf("Num1 = %d\n", num1);
   printf("Num2 = %d\n", num2);
   
   ------------------------
   int num1, num2, num3;
   num1 = 10, num2 = 20;
   printf("Num1 = %d\n", num1);
   printf("Num2 = %d\n", num2);
   printf("--------\n");
   num3 = num2;
   num2 = num1;
   num1 = num3;
   printf("Num1 = %d\n", num1);
   printf("Num2 = %d\n", num2);
   return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// বাফার ক্লিয়ার করার প্রফেশনাল ফাংশন
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // ভ্যারিয়েবল ডিক্লেয়ারেশন (মেমোরি সেফটি মাথায় রেখে সাইজ নির্ধারণ)
    char name[50], address[100], subject[50], bloodGroup[10], phoneNumber[20], gmail[50], grade[5];
    char section;
    bool married;
    int age, tempMarried;
    float height, cgpa;
    double accountBalance;

    // --- ইনপুট সেকশন ---

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // নিউ-লাইন রিমুভ

    printf("Enter your gmail: ");
    fgets(gmail, sizeof(gmail), stdin);
    gmail[strcspn(gmail, "\n")] = 0;

    printf("Enter your phone: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);
    phoneNumber[strcspn(phoneNumber, "\n")] = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    clearBuffer(); // প্রফেশনাল ক্লিনিং

    printf("Enter your height (in feet): ");
    scanf("%f", &height);
    clearBuffer();

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = 0;

    printf("Enter your subject: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strcspn(subject, "\n")] = 0;

    printf("Enter your grade: ");
    fgets(grade, sizeof(grade), stdin);
    grade[strcspn(grade, "\n")] = 0;

    printf("Enter your section: ");
    scanf(" %c", &section);
    clearBuffer();

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    clearBuffer();

    printf("Enter blood group: ");
    clearBuffer(); // অনেক সময় আগের scanf এর জঞ্জাল সরাতে এটি লাগে
    fgets(bloodGroup, sizeof(bloodGroup), stdin);
    bloodGroup[strcspn(bloodGroup, "\n")] = 0;

    printf("Are you married? (1 for Yes, 0 for No): ");
    scanf("%d", &tempMarried);
    married = (tempMarried == 1);
    clearBuffer();

    printf("Enter account balance: ");
    scanf("%lf", &accountBalance);
    clearBuffer();

    // --- আউটপুট সেকশন (সুশৃঙ্খল ফরম্যাটিং) ---

    printf("\n===========================================\n");
    printf("           STUDENT INFORMATION             \n");
    printf("===========================================\n");

    printf("%-20s : %s\n", "Name", name);
    printf("%-20s : %s\n", "Gmail", gmail);
    printf("%-20s : %s\n", "Phone", phoneNumber);
    printf("%-20s : %d years\n", "Age", age);
    printf("%-20s : %.1f feet\n", "Height", height);
    printf("%-20s : %s\n", "Address", address);
    printf("%-20s : %s\n", "Subject", subject);
    printf("%-20s : %s\n", "Grade", grade);
    printf("%-20s : %c\n", "Section", section);
    printf("%-20s : %.2f\n", "CGPA", cgpa);
    printf("%-20s : %s\n", "Blood Group", bloodGroup);
    printf("%-20s : %s\n", "Married Status", married ? "Married" : "Unmarried");
    printf("%-20s : $%.2lf\n", "Account Balance", accountBalance);

    printf("===========================================\n");

    return 0;
}

সি প্রোগ্রামার হিসেবে, মূল লক্ষ্য থাকবে ৩টি: নিরাপত্তা (Safety), নির্ভরযোগ্যতা (Reliability) এবং পরিষ্কার গঠন (Clean Structure)।

১. while (getchar() != '\n'); সরাসরি ব্যবহার
এটি যখন সরাসরি scanf() এর নিচে লিখা হয়, তখন কোডটি কাজ করে ঠিকই, কিন্তু বারবার একই বড় লাইনটি লিখতে হয়। এটি ছোট কোডের জন্য ঠিক আছে।

২. clearBuffer() ফাংশন বানিয়ে ব্যবহার (Professional Way)
প্রফেশনালরা  কোডকে Clean এবং Re-usable রাখতে । একবার একটি ফাংশন বানিয়ে নেওয়া:

আসলে while (getchar() != '\n'); এবং clearBuffer(); এর মধ্যে কাজের কোনো পার্থক্য নেই। 
তবে কোড স্ট্রাকচার এবং রিডিবিলিটির দিক থেকে বিচার করলে clearBuffer(); ফাংশন ব্যবহার করাই ১০০% প্রফেশনাল।

int c ভার্সনটি সেরা

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

EOF হ্যান্ডলিং: EOF মানে হলো End Of File। অনেক সময় ইনপুট স্ট্রীম হঠাৎ বন্ধ হয়ে যেতে পারে বা কোনো যান্ত্রিক ত্রুটি হতে পারে। 
যদি কোডটি শুধু \n চেক করে এবং বাফারটি হঠাৎ খালি হয়ে যায় বা ফাইল শেষ হয়ে যায়, তবে দ্বিতীয় কোডটি Infinite Loop (অবিরাম লুপ) এ আটকে যেতে পারে। 
কিন্তু এই ভার্সনটি EOF চেক করার কারণে নিরাপদে লুপ থেকে বের হয়ে আসবে।

ডেটা টাইপ সতর্কতা: getchar() ফাংশনটি আসলে একটি int রিটার্ন করে (কারণ এটি শুধু ক্যারেক্টার নয়, নেতিবাচক মান যেমন -1 বা EOF ও রিটার্ন করতে পারে)। 
তাই int c এর মধ্যে ভ্যালু রাখা সি ল্যাঙ্গুয়েজের স্ট্যান্ডার্ড নিয়ম।

যখন এই প্রফেশনাল clearBuffer ব্যবহার করা হবে, তখন আর চিন্তা করতে হবে না যে ইউজার কী ইনপুট দিচ্ছে। 
সে এন্টার চাপুক বা ভুল করে অনেকগুলো টেক্সট লিখে ফেলুক, প্রোগ্রাম সবসময় পরবর্তী ইনপুটের জন্য ফ্রেশ থাকবে।

২. হ্যাং হওয়া বা ক্র্যাশ হওয়ার ভয় নেই
দ্বিতীয় যে ছোট ভার্সনটি ছিল (while (getchar() != '\n');), সেটি কিছু বিশেষ পরিস্থিতিতে (যেমন ইনপুট সোর্স হঠাৎ বন্ধ হয়ে গেলে) ইনফিনিট লুপে পড়ে প্রোগ্রামকে হ্যাং করে দিতে পারে।
কিন্তু এই EOF যুক্ত ভার্সনটি সেই ঝুঁকি থেকে আপনার কোডকে ১০০% মুক্ত রাখে।

৩. পোর্টেবিলিটি (Portability)
এই কোডটি সব ধরণের অপারেটিং সিস্টেমে (Windows, Linux, macOS) একইভাবে কাজ করে। যা সব জায়গায় সমানভাবে নির্ভরযোগ্য।


void clearBuffer() {
    while (getchar() != '\n');
}

এটি ছোট কোডের জন্য কাজ করবে এবং দেখতে সহজ। কিন্তু কোনো কারণে যদি ইউজার ইনপুট না দিয়ে সরাসরি কন্ট্রোল ডিরেক্টরি (যেমন Linux এ Ctrl+D বা Windows এ Ctrl+Z) চাপ দেয়, 
তবে এই লুপটি বুঝতে পারবে না কখন থামতে হবে। এতে প্রোগ্রামটি হ্যাং করতে পারে।




void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
} 

টেকনিক্যালি  চাইলে একে main() এর ভেতরেও রাখা যাবে , কিন্তু প্রফেশনাল প্রোগ্রামিংয়ে কেন একে বাইরে রাখা হয়, তার পেছনে ৩টি শক্তিশালী কারণ:
১. ফাংশন রি-ইউজেবিলিটি (একবার লিখে বারবার ব্যবহার)
প্রফেশনাল কোডিংয়ের অন্যতম প্রধান নিয়ম হলো DRY (Don't Repeat Yourself)। অর্থাৎ, একই কোড বারবার না লেখা।

main() এর বাইরে থাকলে: পুরো প্রোগ্রামের যেকোনো জায়গা থেকে (হোক সেটা main() বা অন্য কোনো কাস্টম ফাংশন) শুধু clearBuffer(); লিখে একে ব্যবহার করা যাবে।

main() এর ভেতরে থাকলে: একে অন্য কোনো ফাংশন থেকে কল করা যায় না। ফলে একই লুপ  বারবার লিখতে হবে, যা কোডকে বড় এবং অগোছালো করে ফেলে।

২. মডুলারিটি (কোডকে ছোট ছোট অংশে ভাগ করা)
একজন ইঞ্জিনিয়ার যখন কোনো যন্ত্র তৈরি করেন, তখন তিনি সব পার্টস এক জায়গায় জোড়া দেন না; আলাদা আলাদা অংশ তৈরি করেন। প্রোগ্রামিংয়েও তাই।

main() এর কাজ হলো প্রোগ্রামের মূল ফ্লো নিয়ন্ত্রণ করা।

clearBuffer() এর মতো ছোট টেকনিক্যাল কাজগুলো আলাদা থাকলে main() ফাংশনটি পরিষ্কার এবং সহজে পড়ার যোগ্য থাকে।

৩. কোড মেইনটেন্যান্স (সহজে পরিবর্তন করা)

ভবিষ্যতে বাফার ক্লিয়ার করার লুপটি একটু পরিবর্তন করতে চাইলে(যেমন: কোনো মেসেজ প্রিন্ট করতে চাইলে)।

যদি এটি বাইরে থাকে, তবে শুধু এক জায়গায় পরিবর্তন করলেই হবে।

যদি  এটি main() এর ভেতরে ১০ জায়গায় সরাসরি লিখে রাখা হত, তবে  ১০ জায়গায় গিয়ে পরিবর্তন করতে হবে। এতে ভুলের সম্ভাবনা অনেক বেড়ে যায়।

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    // clearBuffer() এর বদলে পুরো লুপটি এখানে লিখতে হতো
    int c;
    while ((c = getchar()) != '\n' && c != EOF); 

    // আবার যদি অন্য ইনপুটের পর লাগত, তবে আবার এই ৩ লাইন লিখতে হতো
    return 0;
}



#include <stdio.h>

// ১. টুলবক্স (এটি আপনার টুলের মতো, বাইরে থাকবে)
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // ২. মূল কাজ (এখানে শুধু টুলটি ব্যবহার করা হয়েছে)
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    clearBuffer(); // আর একবার টুল ব্যবহার 
    
    return 0;
}
