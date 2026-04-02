C ল্যাঙ্গুয়েজে String Concatenation (স্ট্রিং কনক্যাটিনেশন) বলতে বোঝায় দুটি স্ট্রিং বা শব্দকে একসাথে জোড়া লাগিয়ে একটি নতুন স্ট্রিং তৈরি করা।
C ল্যাঙ্গুয়েজে স্ট্রিং নিয়ে কাজ করার জন্য কোনো বিল্ট-ইন + অপারেটর বা ডেটা টাইপ নেই। সি-তে স্ট্রিংয়ের কাজ করার জন্য char (ক্যারেক্টার) টাইপের অ্যারে (Array) ব্যবহার করা হয়। 
C-তে স্ট্রিং জোড়া দেওয়ার সবচেয়ে সহজ এবং জনপ্রিয় উপায় হলো strcat() (String Concatenate) ফাংশনটি ব্যবহার করা। 
এটি ব্যবহার করতে হলে কোডের শুরুতে #include <string.h> হেডার ফাইলটি যুক্ত করতে হয়।

C language-এ string concatenate (একটা string-এর সাথে আরেকটা string যোগ করা) করার জন্য কয়েকটা গুরুত্বপূর্ণ function আছে 👍
1. strcat() (সবচেয়ে বেশি ব্যবহার হয়)
2. strncat() (limit সহ concatenate)
3. sprintf() (formatted concatenate) 🔥
4. snprintf() (safe version)
5. Manual Method (Loop দিয়ে)
👉 নিজে নিজে concatenate করা

| Function | Safe | Control |
| -------- | ---- | ------- |
| strcat   | ❌    | না     |
| strncat  | ⚠️   | কিছুটা   |
| sprintf  | ❌    | বেশি   |
| snprintf | ✅    | বেশি   |

   
strcat(destination_string, source_string);
এখানে source_string-এর লেখাটি গিয়ে destination_string-এর শেষে যুক্ত হবে।


#include <stdio.h>
#include <string.h>
int main()
{
   // char firstName[30] = "Mohammad ";
   // char lastName[] = "Abdullah";
   // strcat(firstName, lastName);
   // printf("Name : %s\n", firstName);

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

   ⚠️ গুরুত্বপূর্ণ সতর্কতা: প্রথম স্ট্রিংটির (str1) সাইজ বা মেমোরি যথেষ্ট বড় হতে হবে (যেমন উপরে [50] দেওয়া হয়েছে), 
      যাতে দ্বিতীয় স্ট্রিংটি যুক্ত হওয়ার পর পুরো লেখাটি সেখানে জায়গা পায়। জায়গা কম হলে কোড ক্র্যাশ করবে!


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

strcat ২টা নেয়
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
অ্যাডভান্সড কোডিংয়ে বা প্রফেশনাল কাজে strcat ব্যবহার করা নিরাপদ নয়, কারণ মেমোরি ওভারফ্লো হওয়ার ঝুঁকি থাকে।
C ল্যাঙ্গুয়েজে strncat() হলো স্ট্রিং জোড়া দেওয়ার (Concatenation) একটি অত্যন্ত গুরুত্বপূর্ণ এবং নিরাপদ ফাংশন।
সহজ ভাষায়, strncat() ফাংশনটি একটি স্ট্রিংয়ের শেষে অন্য একটি স্ট্রিংয়ের নির্দিষ্ট সংখ্যক অক্ষর (Characters) জোড়া দেওয়ার জন্য ব্যবহার করা হয়। strncat() ফাংশনটি কোনো ভেরিয়েবল নেয় না, 
এটি ৩টি "আর্গুমেন্ট" (Arguments) বা "প্যারামিটার" (Parameters) গ্রহণ করে। 

সাধারণ strcat() ফাংশনটি অন্ধের মতো দ্বিতীয় স্ট্রিংয়ের পুরোটা প্রথম স্ট্রিংয়ের সাথে জুড়ে দেয়।
যদি প্রথম স্ট্রিংয়ের মেমোরি সাইজ ছোট হয়, তবে অতিরিক্ত ক্যারেক্টারগুলো মেমোরির অন্য জায়গা দখল করে ফেলে।
একে প্রোগ্রামিংয়ের ভাষায় Buffer Overflow বলা হয়, যা কোড ক্র্যাশ বা হ্যাক হওয়ার বড় একটি কারণ।strncat() এই সমস্যার সমাধান করে। 
এটি ব্যবহারের সময় আপনি নিজে সংখ্যা বলে দিতে পারেন যে, "আমি ২য় স্ট্রিংয়ের সবটা চাই না, মাত্র N সংখ্যক ক্যারেক্টার ১ম স্ট্রিংয়ের সাথে জুড়তে চাই।"
   
strncat(dest, src, n);

dest (Destination): যে মূল স্ট্রিংটির শেষে নতুন লেখা যুক্ত হবে।

src (Source): যে নতুন স্ট্রিংটি আমরা যুক্ত করতে চাচ্ছি।

n (Number): সোর্স স্ট্রিং থেকে সর্বোচ্চ কতটি ক্যারেক্টার ডেস্টিনেশনে যাবে, তার সংখ্যা।

#include <stdio.h>
#include <string.h> // strncat() ব্যবহারের জন্য জরুরি

int main() {
    char first_str[20] = "Hello "; // প্রথম স্ট্রিং (যথেষ্ট সাইজ রাখা হয়েছে)
    char second_str[] = "World Programming"; // দ্বিতীয় স্ট্রিং
    
    // আমরা second_str থেকে শুধু 'World' টুকু (৫টি ক্যারেক্টার) first_str-এ যুক্ত করব
    strncat(first_str, second_str, 5);
    
    printf("Result 1: %s\n", first_str);
    
    // আরেকটি উদাহরণ: যদি n এর মান সোর্স স্ট্রিংয়ের চেয়ে বড় হয়
    char str3[30] = "Keep It ";
    char str4[] = "Simple";
    
    // 'Simple' এ ৬টি অক্ষর আছে, কিন্তু আমরা দিলাম ১০
    strncat(str3, str4, 10); 
    // এতে কোনো সমস্যা নেই, সোর্স স্ট্রিং শেষ হলেই এটি থমে যাবে
    
    printf("Result 2: %s\n", str3);

    return 0;
}


রুল ১ (Buffer Limit): ডেস্টিনেশন স্ট্রিংয়ের সাইজ অবশ্যই (বর্তমান দৈর্ঘ্য + $n$ + ১) এর সমান বা বড় হতে হবে। শেষের ১ হলো Null character (\0) এর জন্য।
রুল ২ (Automatic Null Character): strncat() ফাংশনটি স্ট্রিং জোড়া লাগানোর পর নতুন স্ট্রিংটির শেষে স্বয়ংক্রিয়ভাবে একটি Null character (\0) বসিয়ে দেয়। ম্যানুয়ালি এটি করতে হবে না।
রুল ৩ (Over-limit handles): আপনি সোর্স স্ট্রিংয়ের দৈর্ঘ্যের চেয়ে বড় কোনো সংখ্যা দিলে (যেমন সোর্স ৫ অক্ষরের কিন্তু আপনি n-এর মান দিলেন ১০), 
ফাংশনটি কোনো এরর দেবে না। সোর্স স্ট্রিংয়ের শেষ মাথা পর্যন্ত গিয়েই এটি থেমে যাবে।

char first_str[20] = "Hello "; 
"Hello " এই লেখাটি মেমোরিতে Null ক্যারেক্টার (\0) সহ মোট ৭টি ক্যারেক্টারের জায়গা নিচ্ছে।
বাকি খালি জায়গা (Empty/Garbage Size): ১৩টি ঘর (20 - 7 = 13)।
strcat(first_str, "World");
strcat(first_str, "World") শুরু হওয়ার পর:
strcat ফাংশনটি প্রথমে first_str এর ভেতরের ওই নাল ক্যারেক্টারটি (\0) কোথায় আছে তা খুঁজে বের করে। এরপর সেটিকে মুছে ফেলে (বা ওভাররাইট করে) সেখান থেকেই নতুন স্ট্রিং "World" বসানো শুরু করে।
['H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0', ... বাকি ৮টি ঘর খালি] 
   
১. সবসময় একটিই নাল থাকে: স্ট্রিংয়ের মাঝখানের \0 টি মুছে যায় এবং নতুন লেখাটি যুক্ত হওয়ার পর তার একদম শেষে একটি নতুন \0 বসে। অর্থাৎ, পুরো স্ট্রিংয়ের শেষে সবসময় একটি মাত্রই নাল ক্যারেক্টার থাকবে।
২. হিসেব: আগে ছিল ৭টি ঘর (স্পেস ও নালসহ)। এখন যুক্ত হলো W, o, r, l, d (৫টি)। তাহলে মোট ঘর হলো ৬ (\text{আগের লেখা}) + ৫ (\text{নতুন লেখা}) + ১ (\text{নতুন নাল}) = ১২ টি।
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

number ছোট হলে 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Good ";
    char str2[] = "Morning";

    strncat(str1, str2, 3);

    printf("Result: %s\n", str1);
    return 0;
}

number বড় হলে (src ছোট) 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hi ";
    char str2[] = "All";

    strncat(str1, str2, 10);

    printf("Result: %s\n", str1);
    return 0;
} 

strcat() দিয়ে আলাদাভাবে স্পেস যোগ করা 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello"; // এখানে কোনো স্পেস নেই
    char str2[] = "World123";

    // ১. প্রথমে একটি স্পেস জোড়া লাগানো হলো
    strcat(str1, " "); 
    
    // ২. এবার str2 থেকে ৫টি অক্ষর (World) জোড়া লাগানো হলো
    strncat(str1, str2, 5);

    printf("Result: %s\n", str1); 
    // আউটপুট আসবে: Hello World

    return 0;
} 

বিষয়	ব্যাখ্যা
strncat() কী করে?	n অক্ষর যোগ করে
null (\0) যোগ করে?	✅ হ্যাঁ
buffer বড় না হলে?	⚠️ crash হতে পারে 
strncat(গন্তব্য, উৎস, কয়টি অক্ষর);




user input----------

#include <stdio.h>
#include <string.h>

int main() {
    // দুটি স্ট্রিংয়ের জন্য ক্যারেক্টার অ্যারে তৈরি
    char str1[100] = "হ্যালো, ";
    char str2[50];
    
    // ইউজারকে ইনপুট দিতে বলা
    printf("আপনার নাম লিখুন: ");
    
    // নিরাপদে ইউজার ইনপুট নেওয়ার জন্য fgets ব্যবহার করা হলো
    fgets(str2, sizeof(str2), stdin);
    
    // fgets() অনেক সময় স্ট্রিংয়ের শেষে এন্টার বা নিউলাইন (\n) নিয়ে নেয়, সেটা বাদ দেওয়ার জন্য এই লাইন:
    str2[strcspn(str2, "\n")] = 0;
    
    // strncat(কোথায় জোড়া লাগবে, কাকে জোড়া লাগানো হবে, সর্বোচ্চ কয়টি ক্যারেক্টার নেওয়া হবে)
    // এখানে আমরা str1 এর সাথে str2 জোড়া লাগাচ্ছি এবং লিমিট দিচ্ছি ২০ ক্যারেক্টার
    strncat(str1, str2, 20);
    
    // ফাইনাল আউটপুট দেখানো
    printf("\nফলাফল: %s\n", str1);
    
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char firstName[30];
    char lastName[30];
    char fullName[100] = "স্বাগতম, "; // শুরুতে এই লেখাটি থাকবে

    printf("আপনার নামের প্রথম অংশ লিখুন: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0; // নিউলাইন রিমুভ করা

    printf("আপনার নামের শেষ অংশ লিখুন: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0;

    // প্রথমে ফার্স্ট নেম জোড়া 
    strncat(fullName, firstName, 20);
    
    // মাঝে একটা স্পেস দেওয়ার জন্য
    strncat(fullName, " ", 2);
    
    // এবার লাস্ট নেম জোড়া 
    strncat(fullName, lastName, 20);

    printf("\nফাইনাল মেসেজ: %s\n", fullName);

    return 0;
}

(-----------Not Profesonal--------------)
first, second এবং third—এই তিনটি স্ট্রিংকে একসাথে জোড়া লাগিয়ে "Programing Language C" বানানোর জন্য সম্পূর্ণ কোড 
strcat() And strncat() ব্যবহার করে (ধাপে ধাপে জোড়া লাগানো)
strncat() ফাংশনটি কোনো ভেরিয়েবল নেয় না, এটি ৩টি "আর্গুমেন্ট" (Arguments) বা "প্যারামিটার" (Parameters) গ্রহণ করে। 
যেহেতু আমাদের কাছে ফাংশনগুলোতে একসাথে ৩টি স্ট্রিং জোড়া দেওয়ার সুযোগ নেই, তাই আমরা প্রথমে first এর সাথে second জোড়া লাগাব, এবং তারপর তার সাথে third জোড়া লাগাব।
   
#include <stdio.h>
#include <string.h>

int main() {
    char first[50] = "Programing "; // ১ম স্ট্রিং
    char second[] = "Language ";   // ২য় স্ট্রিং
    char third[] = "C";            // ৩য় স্ট্রিং
    
    // ১. প্রথমে first এর সাথে second এর পুরোটা জোড়া লাগানো হলো
    strcat(first, second); 
    // এখন first হয়ে গেল: "Programing Language "

    // ২. এবার তার সাথে third এর পুরোটা জোড়া লাগানো হলো
    strcat(first, third); 
    // এখন first হয়ে গেল: "Programing Language C"

    printf("Result: %s\n", first); 

    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
sprintf() Function.
C programming-এ sprintf() ফাংশনটি অনেকটা printf() এর মতোই, কিন্তু একটি বড় পার্থক্য আছে। printf() ডাটা সরাসরি কনসোল বা স্ক্রিনে প্রিন্ট করে, 
আর sprintf() ডাটা প্রিন্ট না করে একটি স্ট্রিং (character array) এর মধ্যে জমা করে রাখে।
sprintf() হলো একটি string formatting function যা formatted data কে string এর ভিতরে লিখে রাখে।

sprintf() এর সিনট্যাক্স:
int sprintf(char *str, const char *format, ...);

str: যেখানে ফরম্যাট করা স্ট্রিংটি সেভ হবে (Character Array)।

format: ফরম্যাট স্পেসিফায়ার (যেমন: %d, %s, %f) সহ স্ট্রিং।

...: যে ভেরিয়েবলগুলোর মান আপনি স্ট্রিংয়ে বসাতে চান।

একজনের নাম, বয়স এবং রোল নম্বর আলাদা আলাদা ভেরিয়েবলে আছে।
এই সবগুলোকে মিলিয়ে একটি পূর্ণাঙ্গ বাক্য তৈরি করতে এবং সেই বাক্যটি পরবর্তীতে ব্যবহার করতে। সেখানেই sprintf() কাজে আসে।
   
#include <stdio.h>

int main() {
    char info_buffer[100]; // ডাটা সেভ করার জন্য একটি অ্যারে
    char name[] = "Arif";
    int age = 25;
    float cgpa = 3.85;
 
    // printf ব্যবহার করলে সরাসরি স্ক্রিনে চলে যেত
    // কিন্তু sprintf এটি info_buffer-এ সেভ করবে
    sprintf(info_buffer, "Name: %s, Age: %d, CGPA: %.2f", name, age, cgpa);

    // এখন চাইলে এই স্ট্রিংটি যেকোনো সময় প্রিন্ট করা যাবে
    printf("The stored string is: \n%s\n", info_buffer);

    return 0;
}

স্ট্রিং ফরম্যাটিং: এটি বিভিন্ন ডাটা টাইপকে একটি নির্দিষ্ট ফরম্যাটে সাজিয়ে একটি সিঙ্গেল স্ট্রিংয়ে রূপান্তর করে।

মেমোরিতে জমা রাখা: এটি সরাসরি আউটপুট দেয় না, বরং মেমোরিতে (বাফার) ডাটা রাইট করে।

রিটার্ন ভ্যালু: এই ফাংশনটি সফলভাবে রাইট হওয়া ক্যারেক্টারের সংখ্যা রিটার্ন করে। 

sprintf() ব্যবহার করার সময় লক্ষ্য রাখতে হবে যেন আপনার Buffer Array (উপরের উদাহরণে info_buffer) যথেষ্ট বড় হয়। যদি ডাটা অ্যারের সাইজের চেয়ে বেশি হয়ে যায়, 
তবে Buffer Overflow হতে পারে যা প্রোগ্রামে এরর ঘটাতে পারে। নিরাপদ থাকার জন্য অনেকে snprintf() ব্যবহার করার পরামর্শ দেন। 

Formatting Date:

#include <stdio.h>

int main() {
    int day = 5, month = 9, year = 2024;
    char date_string[20];

    // %02d ব্যবহার করা হয়েছে যাতে ১ সংখ্যার মাস বা দিনের আগে ০ বসে
    sprintf(date_string, "Date: %02d/%02d/%d", day, month, year);

    printf("%s", date_string); 
    // আউটপুট: Date: 05/09/2024
    return 0;
} 

(Formatting Floats:

#include <stdio.h>

int main() {
    float price = 1250.7584;
    char price_tag[30];

    // %.2f দিয়ে দশমিকের পর মাত্র ২ ঘর রাখা হয়েছে
    sprintf(price_tag, "Product price: %.2f BDT", price);

    printf("%s", price_tag);
    // আউটপুট: Product price: 1250.76 BDT
    return 0;
} 

লগ মেসেজ তৈরি করা (Creating Log Messages):
সফটওয়্যার তৈরির সময় বিভিন্ন ঘটনার সময়কাল বা এরর মেসেজ স্ট্রিং হিসেবে জমা রাখতে এটি খুব কাজে লাগে।
#include <stdio.h>

int main() {
    char log_message[150];
    char user[] = "Admin";
    char action[] = "Deleted a file";

    sprintf(log_message, "LOG: User [%s] performed action: [%s]", user, action);

    printf("%s", log_message);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int age = 20;

    sprintf(str, "My age is %d", age);

    printf("%s", str);
    return 0;
}

👉 এখানে sprintf() string বানিয়েছে, তারপর printf() সেটা print করেছে।

Multiple variable:

#include <stdio.h>

int main() {
    char result[100];
    int a = 10, b = 20;

    sprintf(result, "Sum = %d", a + b);

    printf("%s", result);
    return 0;
}

String + Number:
#include <stdio.h>

int main() {
    char name[] = "Abdullah";
    char output[100];

    sprintf(output, "Name: %s, ID: %d", name, 101);

    printf("%s", output);
    return 0;
}

Float formatting:
#include <stdio.h>

int main() {
    char str[100];
    float pi = 3.14159;

    sprintf(str, "PI = %.2f", pi);

    printf("%s", str);
    return 0;
}

User Input:
#include <stdio.h>

int main() {
    char name[50];
    int age;
    char result[100];

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    sprintf(result, "Name: %s, Age: %d", name, age);

    printf("%s", result);

    return 0;
}

sprintf() কেন ব্যবহার করি?
আমরা formatted data কে string এ রাখতে চাই (file, log, message তৈরি করতে) ব্যবহার  করি 

প্রশ্ন: sprintf() আর snprintf() পার্থক্য?
👉 snprintf() buffer size check করে → বেশি safe 


#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char result[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // newline remove
    name[strcspn(name, "\n")] = 0;

    sprintf(result, "Your name is: %s", name);

    printf("%s", result);

    return 0;
}


1. User Profile Message:

#include <stdio.h>
#include <string.h>

int main() {
    char name[50], result[150];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    sprintf(result, "Welcome %s to our system!", name);

    printf("%s", result);
    return 0;
}

2. Name + Age Combine:

#include <stdio.h>
#include <string.h>

int main() {
    char name[50], age[10], result[150];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter age: ");
    fgets(age, sizeof(age), stdin);

    sprintf(result, "Name: %s | Age: %s", name, age);

    printf("%s", result);
    return 0;
}

3. Full Address Builder:

#include <stdio.h>
#include <string.h>

int main() {
    char village[50], district[50], result[200];

    printf("Enter village: ");
    fgets(village, sizeof(village), stdin);
    village[strcspn(village, "\n")] = 0;

    printf("Enter district: ");
    fgets(district, sizeof(district), stdin);
    district[strcspn(district, "\n")] = 0;

    sprintf(result, "Address: %s, %s", village, district);

    printf("%s", result);
    return 0;
} 

4. দুইটা সংখ্যা যোগ (string input):

#include <stdio.h>
#include <stdlib.h>

int main() {
    char num1[10], num2[10], result[100];

    printf("Enter first number: ");
    fgets(num1, sizeof(num1), stdin);

    printf("Enter second number: ");
    fgets(num2, sizeof(num2), stdin);

    int a = atoi(num1);
    int b = atoi(num2);

    sprintf(result, "Sum = %d", a + b);

    printf("%s", result);
    return 0;
}

5. Email Generator:

#include <stdio.h>
#include <string.h>

int main() {
    char name[50], result[100];

    printf("Enter username: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    sprintf(result, "%s@gmail.com", name);

    printf("Your email: %s", result);
    return 0;
}

6. Salary Slip:

#include <stdio.h>
#include <stdlib.h>

int main() {
    char salaryStr[20], result[150];

    printf("Enter salary: ");
    fgets(salaryStr, sizeof(salaryStr), stdin);

    int salary = atoi(salaryStr);

    sprintf(result, "Salary: %d TK | Bonus: %d TK", salary, salary / 10);

    printf("%s", result);
    return 0;
}

7. Student Result Format:
#include <stdio.h>
#include <stdlib.h>

int main() {
    char marksStr[10], result[100];

    printf("Enter marks: ");
    fgets(marksStr, sizeof(marksStr), stdin);

    int marks = atoi(marksStr);

    sprintf(result, "Marks: %d | Status: %s",
            marks, (marks >= 40) ? "Pass" : "Fail");

    printf("%s", result);
    return 0;
}

8. Date Formatter:

#include <stdio.h>
#include <string.h>

int main() {
    char day[5], month[5], year[10], result[100];

    printf("Enter day: ");
    fgets(day, sizeof(day), stdin);

    printf("Enter month: ");
    fgets(month, sizeof(month), stdin);

    printf("Enter year: ");
    fgets(year, sizeof(year), stdin);

    sprintf(result, "Date: %s/%s/%s", day, month, year);

    printf("%s", result);
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
snprintf() function:
সি ল্যাঙ্গুয়েজে snprintf() হলো একটি অত্যন্ত শক্তিশালী এবং নিরাপদ (Safe) ফাংশন, যা মূলত একটি স্ট্রিংকে ফরম্যাট করে একটি নির্দিষ্ট ক্যারেক্টার অ্যারে বা বাফারে (Buffer) জমা রাখার জন্য ব্যবহৃত হয়। 
এটি printf() বা sprintf() এর মতোই কাজ করে, কিন্তু এতে বাড়তি একটি নিরাপত্তা ফিচার আছে।
👉 snprintf() হলো sprintf() এর safe version
👉 এটা string বানায় কিন্তু buffer size check করে (overflow হতে দেয় না)

snprintf(destination, size, "format", variables);

destination → যেখানে string জমা হবে
size → buffer কত বড়
format → কীভাবে string বানাবে
variables → যেগুলো যোগ হবে 

(sprintf বনাম snprintf)
আমরা জানি sprintf() দিয়ে একটি স্ট্রিংকে অন্য একটি স্ট্রিংয়ে কপি করা যায়। কিন্তু sprintf() এ কোনো সাইজ লিমিট থাকে না। 
ফলে বাফারের সাইজ যদি ছোট হয় আর ডাটা যদি বড় হয়, তবে প্রোগ্রাম ক্রাশ করে (যাকে Buffer Overflow বলা হয়)। 
snprintf() এই সমস্যা সমাধান করে কারণ এতে আপনি বাফারের সর্বোচ্চ সাইজ বলে দিতে পারেন। 

সিনট্যাক্স (Syntax):
str: যে বাফারে বা স্ট্রিংয়ে ডাটা জমা হবে।

size: বাফারের সর্বোচ্চ সাইজ (নাল ক্যারেক্টার \0 সহ)।

format: ফরম্যাট স্পেসিফায়ার (যেমন: %d, %s, ইত্যাদি)।

...: যে ভেরিয়েবলগুলোর মান আপনি বসাতে চান। 

১. নিরাপত্তা (Security): এটি বাফার ওভারফ্লো হতে দেয় না, যা হ্যাকিং বা ক্রাশ থেকে প্রোগ্রামকে বাঁচায়।
২. নাল টার্মিনেশন: এটি সবসময় স্ট্রিংয়ের শেষে একটি \0 (Null character) যোগ করে, যা স্ট্রিং সমাপ্তি নিশ্চিত করে। 
৩. রিটার্ন ভ্যালু (Return Value): এই ফাংশনটি একটি ইন্টিজার রিটার্ন করে। এটি জানায় যে—পুরো স্ট্রিংটি যদি জায়গা পেত, তবে তার দৈর্ঘ্য কত হতো। 
এটি দিয়ে আপনি চেক করতে পারেন যে ডাটা "Truncate" বা কাটা পড়েছে কি না। 
   
এটি ব্যবহার: 
   
যখন আপনি একাধিক ভেরিয়েবল (যেমন: নাম, বয়স, আইডি) মিলিয়ে একটি নতুন স্ট্রিং তৈরি করতে চান।

যখন ইউজারের ইনপুট থেকে কোনো স্ট্রিং তৈরি করছেন এবং আপনি নিশ্চিত নন ইনপুটটি কত বড় হবে।

এমবেডেড সিস্টেম বা নেটওয়ার্ক প্রোগ্রামিংয়ে যেখানে মেমোরি ম্যানেজমেন্ট খুবই গুরুত্বপূর্ণ।
