#include <stdio.h>

int main()
{
    int i = 5;
    // age == 7 ? printf("%d\n", 12) : printf("%d\n", 14);
    // while (age == 7)
    // {
    //     while (age == 4)
    //     {
    //         printf("hi");
    //     }
    // }

    for (; i > 0;)
    {
        printf("This loop will run forever.\n");
        i--;
    }

    return 0;
}