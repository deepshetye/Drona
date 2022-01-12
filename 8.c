#include <stdio.h>

int main()
{
    char res;
    printf("Hi welcome to apple\n");

    while (res != 'n')
    {
        int a, b;
        printf("Press a for addition\nPress b for subtraction\nPress n to exit\n");
        scanf("%c", &res);

        switch (res)
        {
        case 'a':
            scanf("%d %d", &a, &b);
            printf("%d\n", a + b);
            break;

        case 'b':
            scanf("%d %d", &a, &b);
            printf("%d\n", a - b);
            break;

        default:
            break;
        }
        printf("\n");
    }

    printf("Bye bye!!\n");

    return 0;
}