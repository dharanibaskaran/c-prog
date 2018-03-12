#include<stdio.h>
int main()
{
int n,c=0,g=1,d=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<=c;i++)
{
g=g*d;
}
printf("%d",g);
}
