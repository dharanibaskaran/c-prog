#include <stdio.h>
void main()
{
 int n,i,j,d;
printf("enter the number");
scanf("%d",&n);
 int a[n];
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
 if(a[i]>a[j])
{
 d=a[i];
a[i]=a[j];
a[j]=d;
}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
