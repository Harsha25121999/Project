#include<stdio.h>
void main()[C
{
int a,b,temp;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
temp = a;
a = b;
b = temp;
printf("Swapped numbers are %d %d",a,b);
