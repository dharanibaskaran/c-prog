#include <stdio.h>

int main(void) 
{
	char a[100];
	int d=1,i,b=0;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		b=++d;
	}
	printf("%d",b);
	return 0;
}
