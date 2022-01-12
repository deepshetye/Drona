#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 0; i < 2; i++)
    {
        int a = 2;
        printf("%d\n", a);
    }
    printf("%d", a);
    return 0;
}