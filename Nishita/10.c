#include<stdio.h>
#include<math.h>
int main()
{
	int x,x1,x2,y,y1,y2;
	float cir,area,dia,rad;
	printf("Enter the x axis end points of diameter\n");
	scanf("%d%d",&x1,&x2);
	printf("Enter the y axis end points of diameter\n");
	scanf("%d%d",&y1,&y2);
	x=x2-x1;
	y=y2-y1;
	dia=sqrt(pow(x,2)+pow(y,2));
	rad=dia/2;
	area=M_PI*pow(rad,2);
	cir=2*M_PI*rad;
	printf("Area=%f\nCircumference=%f",area,cir);
	return 0;
}
