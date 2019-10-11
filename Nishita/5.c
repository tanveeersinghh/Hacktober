#include<stdio.h>
int main()
{
	int a,b,mod,sum,diff,pro,div;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	pro=a*b;
	div=a/b;
	mod=a%b;
	printf("Sum=%d\nDifference=%d\nProduct=%d\nDivision=%d\nModulus=%d",sum,diff,pro,div,mod);
	return 0;
}
