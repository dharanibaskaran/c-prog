#include <stdio.h>
int main() 
    {    
    int array[100], min, size, i, location = 1;
    
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
    
    printf("Enter %d integers\n", size);
    for ( i = 0 ; i < size ; i++ )
    scanf("%d", &array[c]);    
    min = array[0];
    for ( i = 1 ; i < size ; i++ ) 
    {
        if ( array[i] < min ) 
        {
min = array[i];
location = i+1;
        }
    } 
    printf("Min element is present at location %d and it's value is %d.\n", location, min);
    return 0;
}
