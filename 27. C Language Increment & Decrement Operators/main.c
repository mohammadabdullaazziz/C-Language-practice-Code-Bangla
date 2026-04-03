সি প্রোগ্রামিং ভাষায় Increment(++) এবং Decrement(--) অপারেটরগুলো হলো Unary Operators, যা ভ্যারিয়েবলের মান ১ বৃদ্ধি(increase) বা ১ হ্রাস(decrease) করতে ব্যবহৃত হয়।

সি ল্যাঙ্গুয়েজে Increment (++) এবং Decrement (--) অপারেটরগুলো সরাসরি কোনো নরমাল ভ্যালু বা কনস্ট্যান্টের (যেমন: ৫, ১০, বা 'A') সাথে ব্যবহার করা যায় না।
এগুলো শুধুমাত্র ভেরিয়েবল (Variable) এর সাথেই কাজ করে।

1. Increment operator (++) 
এই অপারেটর ভ্যারিয়েবলের মান ১ বৃদ্ধি করে। 

উদাহরণ: a++ বা ++a মানে হলো a = a + 1

#include <stdio.h>
int main() {
    int a = 10;
    a++; // a এর মান এখন ৯ হবে
    printf("Value of a: %d\n", a);
    
    ++a; // a এর মান এখন ৮ হবে
    printf("Value of a: %d\n", a);
    
    return 0;
}

    
2. Decrement operator (--)
এই অপারেটর ভ্যারিয়েবলের মান ১ হ্রাস করে। 
    
উদাহরণ: a-- বা --a মানে হলো a = a - 1

#include <stdio.h>
int main() {
    int a = 10;
    a--; // a এর মান এখন ৯ হবে
    printf("Value of a: %d\n", a);
    
    --a; // a এর মান এখন ৮ হবে
    printf("Value of a: %d\n", a);
    
    return 0;
}


ইনক্রিমেন্ট ও ডিক্রিমেন্টের প্রকারভেদ
ব্যবহারের নিয়মের ওপর ভিত্তি করে এগুলো দুই প্রকার:

Increment operator (++)
----------------------
    
1. Prefix-Increment
এখানে অপারেটরটি ভেরিয়েবলের আগে বসে (যেমন: ++a বা --a)
এক্ষেত্রে অপারেটর ভ্যারিয়েবলের আগে বসে। প্রথমে ভ্যারিয়েবলের মান ১ বৃদ্ধি তারপর সেই নতুন মানটি ক্যালকুলেশনে ব্যবহৃত হয়।
x = 5; y = ++x; এখানে x এর মান প্রথমে ৬ হবে, তারপর y এর মান ৬ হবে।

#include <stdio.h>
int main() {
    int x = 10, y;

    // ১. Postfix Increment (x++)
    // নিয়ম: আগে মান ব্যবহার হবে, তারপর বাড়বে।
    y = x++; 
    printf("After Postfix (y = x++):\n");
    printf("y = %d (আগের মান নিয়ে নিয়েছে)\n", y);
    printf("x = %d (পরে ১ বেড়েছে)\n\n", x);

    x = 10; // আবার ১০ সেট করি

    // ২. Prefix Increment (++x)
    // নিয়ম: আগে মান বাড়বে, তারপর ব্যবহার হবে।
    y = ++x;
    printf("After Prefix (y = ++x):\n");
    printf("y = %d (আগে বেড়ে ১১ হয়েছে)\n", y);
    printf("x = %d (বেড়ে ১১ হয়েছে)\n", x);

    return 0;
}

 
#include <stdio.h>
int main() {
    int x = 5;
    int y = ++x;

    printf("x = %d, y = %d", x, y);
    return 0;
}

2.Postfix-Increment → x++
প্রথমে বর্তমান মানটি ব্যবহার হবে, তারপর মান ১ বাড়বে।

#include <stdio.h>
int main() {
    int x = 5;
    int y = x++;

    printf("x = %d, y = %d", x, y);
    return 0;
}

#include <stdio.h>
int main() {
    int x = 10;

    printf("%d", x++);
    return 0;
}

Decrement Operator (--)
-----------------------

1.Prefix-Decrement → --x
প্রথমে মান ১ কমবে, তারপর সেই কমানো মানটি ব্যবহার হবে।

#include <stdio.h>
int main() {
    int x = 5;
    int y = --x;

    printf("x = %d, y = %d", x, y);
    return 0;
}

2. Postfix-Decrement → x--
প্রথমে বর্তমান মানটি ব্যবহার হবে, তারপর মান ১ কমবে।

#include <stdio.h>
int main() {
    int x = 5;
    int y = x--;

    printf("x = %d, y = %d", x, y);
    return 0;
}


#include <stdio.h>
int main() {
    int x = 10, y;

    // Postfix উদাহরণ
    y = x++; 
    printf("Postfix: y = %d, x = %d\n", y, x); 
    // আউটপুট: y=10 (আগের মান), x=11 (পরে বেড়েছে)

    x = 10; // আবার ১০ সেট করলাম

    // Prefix উদাহরণ
    y = ++x; 
    printf("Prefix:  y = %d, x = %d\n", y, x); 
    // আউটপুট: y=11 (আগে বেড়েছে), x=11 (বর্ধিত মান)

    return 0;
}
