#include <stdio.h>

int main(void) {
	int a,b,g,i,d=0;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the limits");
	scanf("%d%d",&b,&g);
	for(i=b;i<=g;i++)
	{
		if(a==i)
		{
			d=1;
			break;
		}
	}
	if(d==1)
	printf("\nYes");
	else
	printf("\nNo");
	return 0;
}
