/* c program to accept two numbers and calculate the multiplication without using multiplication ('*') operator */
#include<stdio.h>
void main()
{
	int a,b,m=0;
	printf("enter any two numbers=");
	scanf("%d%d",&a,&b);
	while(a>0)
	{
	m=m+b;
	a--;
	}
	printf("multiplication of the given numbers is %d.",m);
} 
