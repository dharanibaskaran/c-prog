#include <stdio.h>
 
int main()
{
    int input_a,hour,min,sec;
 
    printf("input number in total seconds\n");
    scanf("%d", &input_a);
    while(input_a > 3600){
    hour = input_a /3600;
    min = input_a % 60;
    sec = min % 60;
    printf("%d hours%d minutes and %d seconds\n",hour,min,sec);
    }   
    min = input_a  / 60;
    sec = input_a % 60;
    printf("%dminutes and %dseconds\n",min,sec);
    return 0;
