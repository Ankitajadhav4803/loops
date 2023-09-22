/* c program to accept an integer and check if it is prime or not */
#include<stdio.h>
void  main()
{
	int n,f=0,i=2;
	printf("enter any number=");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
	printf("given number is prime.");
	else
	printf("given number is not prime.");
}
