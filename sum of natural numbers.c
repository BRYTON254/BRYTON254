#include<stdio.h>

int main()
{
    int  j,sum=0;
    printf("the first 10natural numbers is:\n");
    for(j=1; j<=10; j++)
    {
        sum=sum+j;
        printf("%d",j);
    }
    printf("\n the sum is:%d\n",sum);
    return 0;
}