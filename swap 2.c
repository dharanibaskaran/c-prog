#include<stdio.h>
int main()
{
    int d=10,g=20,temp;
    {
        temp=d;
        d=g;
        d=temp;
    }
      printf("the d value is%d",d);
      printf("the g value is%d",g);
    }
