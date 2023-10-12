/* c program to accept an integer n and display sum of all even and odd numbers upto n */
#include<stdio.h>
void  main()
{
	int i,n,es=0,os=0;
	printf("enter the limit=");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		es=es+i;
		else
		os=os+i;
		i++;
	}
	printf("\nsum of all even numbers upto %d=%d",n,es);
	printf("\nsum of all odd numbers upto %d=%d",n,os);
}

