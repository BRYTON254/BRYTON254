#include<stdio.h>
int main()
{
int num;
printf("the num:");
scanf("%d",&num);
//it is true if the num is completely divisible by 5
if(num %5==0)
printf("%d is divisible.",num);
else
printf("%d is not divisible.",num);
return 0;
}