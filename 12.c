#include <stdio.h>
static int count = 5; /* global variable */

void func(void)
{

    auto int i = 5; /* local static variable */
    i++;

    printf("i is %d and count is %d\n", i, count);
}

int main()
{
    while (count--)
    {
        func();
    }
    return 0;
}

// a+=3 === a = a + 3
// a-=3 === a = a - 3
// a++ === a = a + 1
// a-- === a = a - 1