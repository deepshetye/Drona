#include <stdio.h>
#include "13.h"
// static int count = 5; /* global variable */

// void func2(void)
// {

//     register int count1 = 5; /* global variable */
//     auto int count2 = 6;     /* global variable */
//     fun();

//     printf("%d\n", count1 + count2);
// }

// void func1(void)
// {
//     func2();
//     register int count1 = 5; /* global variable */
//     auto int count2 = 6;     /* global variable */

//     printf("%d\n", count1 + count2);
// }

int main()
{

    // func1();
    fun();
    return 0;
}

// a+=3 === a = a + 3
// a-=3 === a = a - 3
// a++ === a = a + 1
// a-- === a = a - 1