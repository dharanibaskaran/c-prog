#include<stdio.h>
int main()
{
 int i,n1,n2;
 printf("enter the a value");
 scanf("%d",&n1);
 printf("enter the b value");
 scanf("%d",&n2);
 for(i=n1;i<=n2;i++)
 {
  if(i%2==0)
   printf("%d",i);
 }
