#include<stdio.h>
void main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n%2;++i);
{
if(n%i==0)
printf("not prime number");
else
printf("prime number);
}
}
