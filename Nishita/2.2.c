/*2. The price of one pen is Rs.10, one pencil is Rs. 5, and one sharpener is Rs. 2. You purchased 2
pens, 3 pencils and 1 sharpener. Compute the total price as per the following format.
****** LIST OF ITEMS ******
Item Price (Rs.) Total (Rs.)
Pen 10 20
Pencil 5 15
Sharpener 2 2
Grand Total (Rs.) 17 37*/
#include<stdio.h>
int main()
{
int pen=10,pencil=5,sharp=2,p,pi,s,to,t;
p=2*pen;
pi=3*pencil;
s=1*sharp;
t=pen+pencil+sharp;
to=p+pi+s;
printf("Item\t\t Price(Rs.)\tTotal(Rs.)\nPen\t\t%d\t\t%d\nPencil\t\t%d\t\t%d\nSharpner\t%d\t\t%d\nGrand Total(Rs.)%d\t\t%d",pen,p,pencil,pi,sharp,s,t,to);
return 0;
}
