#include<stdio.h>
void main()
{
int a,i;
printf("enter the number");
scanf("%d",&a);
for(i=2;i<=a%2;++i);
{
if(a%i==0)
printf("not prime number");
else
printf("prime number);
}
}
