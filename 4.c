#include <stdio.h>

int main()
{
    char a[20];
    fgets(a, 10, stdin);
    printf("%s\n", a);
    return 0;
}

// ['d', 'e', 'e', 'p', '', '', ... ]