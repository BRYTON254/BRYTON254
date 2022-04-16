/*c program to display 50 natural numbers in a reverse loop*/ 
#include<stdio.h>
int main()
{
int n=50;
while(n>0)
{
printf("%d\n",n);
n-=1;
}
printf("end of loop");
return 0;  
}
