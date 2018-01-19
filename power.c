#include<stdio.h>
void main()
{
int base,exponant,result;
printf("enter the number");
scanf("%d%d",&base,&exponant);
while(exponant!=0)
{
result=base;
--exponant;
}
printf("%d",result);
}
