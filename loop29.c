/* c program to accept a number n and calculate the multiplication of first and last digit of the number*/
#include<stdio.h>
void main()
{
	int n,f,l;
	printf("enter any number=");
	scanf("%d",&n);
	l=n%10;
	while(n>0)
	{
	f=n%10;
	n=n/10;
	}
	printf("multiplication of first and last digit is %d.",f*l);
} 
