/* c program to display n natural numbers in reverse order */
#include<stdio.h>
void  main()
{
	int i,n;
	printf("enter the limit=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d\t",i);
	}
}

