#include <stdio.h>
#include <string.h>
 
void main()
{
    char a[200];
    int count = 0, k;
 
    printf("enter the string\n");
    scanf("%[^\n]a", a);
    for (k= 0;a[k] != '\0';k++)
    {
        if (a[k] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
