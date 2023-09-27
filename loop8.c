/* c program to accept an integer and display the multiplication table */
#include<stdio.h>
void  main()
{
	int n,i;
	printf("enter any number=");
	scanf("%d",&n);
	printf("table=\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\n",n*i);
	}
}
