#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the a,b value");
    scanf("%d,%d",&x,&y);
    {
    x=x^y;
    y=x^y;
    x=x^y;
    }

printf("the value%d,%d",x,y);

    }

