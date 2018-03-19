#include <stdio.h>
 
int main(void) {
int g,i,f=0;
scanf("%d",&g);
for(i=2;i<=g/2;i++)
{
	if(g%i==0){
		f=1;
		break;
	}
	
}
if(f==1)
printf("yes");
else
printf("No");
	return 0;
}
