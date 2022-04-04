//c program to check whether a number is positive or negative
#include<stdio.h>
int main()
{
int num;
printf("enter the num:");
scanf("%d",&num);
if(num>=0)
printf("%d is positive num\n",num);
else
printf("%d is negative num\n",num);
return 0;
}