/* c program to calculate sum of numbers */
#include<stdio.h>
void  main()
{
	int n,sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n;
		n--;
	}
	printf("\n the sum of numbers is %d",sum);
}
