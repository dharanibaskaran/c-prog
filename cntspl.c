#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0,b,count1=0,spl=0;
	char ch[200];
	printf("\nEnter character");
	scanf("%s",&ch);
	b=strlen(ch);
for(j=0;j<b;j++)
{
	if(ch[j]>='0'&&ch[j]<='9')
	{
	
	 count++;
    }   
    else if((ch[j]>='a'&&ch[j]<='z')||(ch[j]>='A'&&ch[j]<='Z'))
    {
    	count1++;
	}
	else
	{
		spl++;
	}
}
printf("\nNumeric:%d",spl);
}
