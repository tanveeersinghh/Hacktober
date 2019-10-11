#include<stdio.h>
int main()
{
	char city[15],name[15],state[15],street[20];
	int pincode,houseno;
	printf("Enter the following Details\n");
	printf("Enter your:\nName\nHouse Number\nStreet\nCity\nState\n");
	scanf("%s%d %s %s %s",&name,&houseno,&street,&city,&state);
	printf("Enter your 6 digit pincode\n");
	scanf("%d",&pincode);
	printf("Name\t\t\t:\t%s\nHouse Number,Street\t:\t#%d,%s\nCity\t\t\t:\t%s\nState,Pincode\t\t:\t%s,%d",name,houseno,street,city,state,pincode);
	return 0;
}
