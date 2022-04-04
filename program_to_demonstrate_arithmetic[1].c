#include<stdio.h>
int main()
{
int x=40;
int y=15;
int z;
z=x+y;
z=x-y;
z=x*y;
z=x/y;
z=x%y;
printf("value of z is %d\n",z);
z=x+y;
printf("value of z is %d\n",z);
z=z-y;
printf("value of z is %d\n",z);
z=x*y;
printf("value of z is %d\n",z);
z=x/y;
printf("value of z is %d\n",z);
z=x%y;
return 0;
}