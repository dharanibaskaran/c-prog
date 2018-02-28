#include<stdio.h>
void main()
{
    int b;
    printf("enter the number");
    scanf("%d",&b);
    b-=1;
    while(b%2!=0)
    {
        b--;
    }
    printf("%d",b);
    
}
