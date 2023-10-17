/* c program to accept a number n and display the first and last digit of the number*/
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
	printf("\nfirst digit of the given number is %d.",f);
	printf("\nlast digit of the given number is %d.",l);
} 
