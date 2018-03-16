#include <stdio.h>

int main(void)
{
	char c[10]={'a','e','i','o','u','A','E','I','O','U'},a[20];
	int i,j,f=0;
	scanf("%s",a);
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=0;j<10;j++)
		{
			if(c[j]==a[i])
			{
			f=1;
				break;
			}
		}
	}
	if(f==1)
	printf("YES");
	else
	printf("No");
	return 0;
}
