#include <stdio.h>

char getName()
{
    char name[10];
    fgets(name, 10, stdin);
    return name;
}

int main()
{
    int name[10];
    getName();
    scanf("Enter a number: ");
    scanf("Enter a number: ");
    return 0;
}
