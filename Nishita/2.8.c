#include<stdio.h>
main()
{
	int a;
	float b;
	double c;
	char d;
	printf("Enter a integral number\n");
	scanf("%d",&a);
	printf("Enter a floating number\n");
	scanf("%f",&b);
	printf("Enter a double  number\n");
	scanf("%lf",&c);
	printf("Enter a char \n");
	scanf(" %c",&c);
	printf("Int=%d\n",sizeof(a));
	printf("Float=%d\n",sizeof(b));
	printf("Double=%d\n",sizeof(c));
	printf("Char=%d\n",sizeof(d));
	return 0;
}
