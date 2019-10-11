#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter 3 variables\n");
	scanf("%f%f%f",&a,&b,&c);
	d=((a+b)/(b-c));
	printf("%f",d);
	return 0;
}
