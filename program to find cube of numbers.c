//program the cube of the number upto agiven integer
#include<stdio.h>
void main()
{
int i,ctr;
printf("input number of the terms");
scanf("%d",&ctr);
for(i=1;i<=ctr;i++)
{
printf("the number is:%d\n",(i*i*i));
}
}