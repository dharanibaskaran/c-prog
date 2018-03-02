#include<stdio.h>
void main()
{
int b[50],i,max,size=10;
for(i=0;i<size;i++)
{
scanf("%d",&b[i]);
}
max=b[0];
for(i=1;i<size;i++)
{
if(b[i]>max)
{
max=b[i];
}
}
printf("the maximum element is %d",max);
}
