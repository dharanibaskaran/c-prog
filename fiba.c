#include<stdio.h>
int main()
{
	int f1=0,f2=1,f,n,i;
	printf("enter the values");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f1+f2;
		printf("%d",f1);
		f1=f2;
		f2=f;
	}
	return 0;
 
}
