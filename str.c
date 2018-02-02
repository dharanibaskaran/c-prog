 #include<stdio.h>
int main(void)
{
	char s[50];
	int c=0,k;
	scanf("%s",&s);
  for(k=0;k<='\0';k++)
	{
	if((s[k]>='0')&&(s[k]<='9'))
  c++;
	}
	if(c>=1)
	printf("The given string is numeric");
	else
	printf("Not numeric");
	return 0;
}
