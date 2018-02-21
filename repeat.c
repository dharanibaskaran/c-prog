#include<stdio.h>
int main()
{
    int digit,b,sum=0;
    printf("enter the num value");
    scanf("%d",&b);
     while (b> 0)
    {
        digit = b % 10;
        sum  = sum + digit;
        b/=0;
    }   
    printf("%d",sum);
    
}

