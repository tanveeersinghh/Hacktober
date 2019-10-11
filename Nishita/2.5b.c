#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers:\na=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("Numbers after swapping:\na=%d\nb=%d",a,b);
return 0;
}
