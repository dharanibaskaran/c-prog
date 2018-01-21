#include<stdio.h>
void main()
{
int i,n,d;
printf("enter the limit");
scanf("%d",&n);
print("the number divisible by %d are \n\n",d);
for(i=1;i<=n;i++)
if(i%d==0)
printf("%d\t",i);
getch();
}
