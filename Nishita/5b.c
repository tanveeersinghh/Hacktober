#include<stdio.h>
int main()
{
	float a,b,sum,diff,pro,div;
	printf("Enter two numbers\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	diff=a-b;
	pro=a*b;
	div=a/b;
	printf("Sum=%f\nDifference=%f\nProduct=%f\nDivision=%f",sum,diff,pro,div);
	return 0;
}
