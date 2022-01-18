#include <stdio.h>
// Union

union test
{
    int x;
    char y;
};

int main()
{
    union test p1;
    p1.x = 65;
    printf("%d", p1.x);
    p1.y = 'a';
    printf("%d %c", p1.y);

    // p2 is a pointer to union p1
    // union test *p2 = &p1;

    // Accessing union members using pointer
    return 0;
}