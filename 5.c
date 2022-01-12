#include <stdio.h>

int main()
{
    char a;
    printf("Do you want to continue: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'y':
        printf("hello\n");
        break;

    case 'n':
        printf("hoya\n");
        break;

    case 'Y':
        printf("he\n");
        break;

    case 'N':
        printf("hi\n");
        break;

    default:
        printf("hellofvbdjb\n");
        break;
    }
    return 0;
}