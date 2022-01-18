#include <stdio.h>
//Structure

struct Student
{
    int age;
    int rollNo;
    // char name[10];
};

int main()
{
    int max;
    scanf("%d", &max);
    struct Student s1[max];
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &s1[i].age);
        s1[i].rollNo = i + 1;
    }

    for (int i = 0; i < max; i++)
    {
        printf("%d:  %d \n", s1[i].rollNo, s1[i].age);
    }

    return 0;
}