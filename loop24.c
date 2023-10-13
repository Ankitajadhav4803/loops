/* c program to accept an integer n and display multiplication of all even and odd numbers upto n */
#include<stdio.h>
void  main()
{
	int i,n,em=1,om=1;
	printf("enter the limit=");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		em=em*i;
		else
		om=om*i;
		i++;
	}
	printf("\nmultiplication of all even numbers upto %d=%d",n,em);
	printf("\nmultiplication of all odd numbers upto %d=%d",n,om);
}

