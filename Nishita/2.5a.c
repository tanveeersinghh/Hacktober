#include<stdio.h>
int main()
{
int a,b;
printf("Enter the two numbers\na=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("After Swapping\na=%d\nb=%d",a,b);
return 0;
}
