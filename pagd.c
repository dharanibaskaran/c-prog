#include <stdio.h>
#include <string.h>
int main(){
    char str[10];
    int i, l;
    int a = 0;
    
    printf("Enter a string:");
    scanf("%s", str);
    
    l = strlen(str);
    
    for(i=0;i < l ;i++){
        if(str[i] != str[l-i-1]){
            a= 1;
            break;
   }
}
    
    if (a==1)
    {
        printf("%s is not a palindrome", str);
    }    
    else {
        printf("%s is a palindrome", str);
    }
    return 0;
}
