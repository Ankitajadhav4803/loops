/* c program to accept an integer and count the number of digits in the number */
#include<stdio.h>
void  main()
{
	int n,d,count=0;
	printf("enter any number=");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		count++;
	}
	printf("\n number of digits in the given number=%d",count);
}
