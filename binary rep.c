#include <stdio.h>

int main(void)
{
char a[100];
int g=0,i;
scanf("%s",a);

for(i=0;a[i]!=NULL;i++)
{
	if((a[i]=='0')||(a[i]=='1'))
	{
		g=1;
	}
	else
	g=0;
}
if(g==1)
printf("yes");
else 
printf("no");
	return 0;
}
