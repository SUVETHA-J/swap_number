#include<stdio.h>
int main()
{
int a,b;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("swapped numbers of a = %d \nb=%d",a,b);
return 0;

}
