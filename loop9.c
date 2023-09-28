/* c program to accept a number and display the sum of all digits of the number */
#include<stdio.h>
void  main()
{
	int n,d,s=0;
	printf("enter any number=");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("\n sum of all digits of the given number is %d.",s);
}
