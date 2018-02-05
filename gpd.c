#include<stdio.h>
#include<string.h>
void main()
{
int a,b=0,i;
char s[500];
//puts(enter the lines);
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]=='.')
b++;
}
printf("%d",b);
}
