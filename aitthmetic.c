#unciude<stdio.h>
int main();
{
printf("enter the number element in the array\n");
scanf("%d",&size);
printf("enter %d integer \n",size);
for (c=0;c<size;c++)
scanf("%d",&array[c]);
minimum=array[0];
for(c=1;c<size;c++)
{
if(array[c]<minimum)
{
minimum=array[c];
location=c+1;
}
}
printf("minimum elements is prevent ofv location %d and value is %d\n",location minimum");
return 0;
}
