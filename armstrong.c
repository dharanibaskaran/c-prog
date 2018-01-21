#include<stdio.h>
void main()
{
int num,result=0,rem;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
result=result+rem+rem*rem
num=num%10;
}
if(result==num)
printf("the number is armstrong");
else
printf("the number is not armstrong");
}
