#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter the value of celsius scale\n");
	scanf("%f",&C);
	F=((9*C/5)+32);
	printf("%fF",F);
	return 0;
}
