#include <stdio.h>

int main()
{
    int a[3][4] = {
        {0, 1, 2, 3},  /*  initializers for row indexed by 0 */
        {4, 5, 6, 7},  /*  initializers for row indexed by 1 */
        {8, 9, 10, 11} /*  initializers for row indexed by 2 */
    };
    int b[4][4][4] = {
        {
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
        },
        {
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
        },
        {
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
        },
        {
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
            {0, 1, 2, 3},
        },
    };

    return 0;
}