/*1. WAP to compute the gross salary of an employee whose details are given below:
Basic pay: Rs.50, 000, dearness allowance: 50% of Basic pay, house rent allowance: 20% of Basic
pay, vehicle allowance: 10% of the Basic pay.*/
#include<stdio.h>
int main()
{
int bp;
float da,hra,va,gs;
bp=50000;
da=0.5*bp;
hra=0.2*bp;
va=0.1*bp;
printf("Basic Pay=50,000\nDearness Allowance=%f\nHouse Rent Allowance=%f\nVehicle Allowance=%f\n",da,hra,va);
gs=bp+da+hra+va;
printf("Gross Salary=%f",gs);
return 0;
}

