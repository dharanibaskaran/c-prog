#include<stdio.h>
int main()
{
  int g,i,f=1;
  scanf("%d",&g);
  for(i=2;i<=g/2;i++)
  {
    if(g%i==0)
    {
   
    	f=0;
    	break;
    }
    
  }
  if(f==1)
  printf("Yes");
  else
  printf("No");
  return 0;

}
