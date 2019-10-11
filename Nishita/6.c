#include<stdio.h>
#include<math.h>
int main()
{
	float SI,CI;
	int P,R,T,Q;
	printf("Enter Principle Amount,Rate,Time\n");
	scanf("%d%d%d",&P,&R,&T);
	SI=P*R*T;
	Q=1+R/100;
	CI=P*pow(Q,T)-P;
	printf("Simple Interest=%f\nCompound Interest=%f",SI,CI);
	return 0;
}
