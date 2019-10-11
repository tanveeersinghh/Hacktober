#include<stdio.h>
int main()
{
	float F,C;
	printf("Enter the value of farenheit scale");
	scanf("%f",&F);
	C=((F-32)*5/9);
	printf("%fC",C);
	return 0;
}
