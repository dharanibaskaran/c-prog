#include <stdio.h>

int main(void) 
{
char a[100];
int d,i;
scanf("%s",a);
scanf("%d",&d);
for(i=0;i<d;i++)
{
	printf("%c",a[i]);
}
	return 0;
}
