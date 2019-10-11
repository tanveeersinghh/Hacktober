#include<stdio.h>
int main()
{
int a,b,c,sum,pro;
printf("Enter a 3 digit number");
scanf("%d",&a);
b=a/100;
a=a%100;
c=a/10;
a=a%10;
sum=a+b+c;
pro=a*b*c;
printf("Sum=%d\nProduct=%d",sum,pro);
return 0;
}
