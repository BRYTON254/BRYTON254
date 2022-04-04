// a program to determine eligibility to vote based on age and nationality of kenya
#include<stdio.h>

int main()
{
    int age;
    int Kenyan;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("eligible to vote");
    }
    else
        printf("not eligible to vote");

    return 0;
}