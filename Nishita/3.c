#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	float b;
	char c,d[10];
	printf("Enter an integer\n");
	scanf("%d",&a);
	printf("Enter a decimal number\n");
	scanf("%f",&b);
	printf("Enter a character\n");
	scanf(" %c",&c);
	printf("Enter a string\n");
	scanf(" %s",&d);
	printf("Integer-%d\nDecimal Number-%f\nCharacter-%c\nString-%s",a,b,c,d);
	return 0;
}
