#include <stdio.h>

int main()
{
    int age = 18;
    int age2 = 1;
    if (age % 2 == 0)
    {
        printf("You have access\n");
    }
    else
    {
        printf("No access\n");
    }
    return 0;
}

// 00010010 << 1
// 00100100

// 100 // 4
// 010 // 2

// 00010010 >> 1
// 00001001