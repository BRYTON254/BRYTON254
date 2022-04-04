#include<stdio.h>
int main()
{
int num;
printf("the num:");
scanf("%d",&num);
//it is true if the num is completely divisible by 2
if(num %2==0)
printf("%d is even.",num);
else
printf("%d is odd.",num);
return 0;
}