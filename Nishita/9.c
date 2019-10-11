#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float S,Area;
	printf("Enter the sides of the triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	S=(a+b+c)/2;
	Area=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("Area=%f",Area);
	return 0;
}
