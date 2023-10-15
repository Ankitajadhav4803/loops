/* c program to display the first n fibonacci numbers */
#include<stdio.h>
void main()
{
	int n,i,f=0,s=1,t;
	printf("enter the limit=");
	scanf("%d",&n);
	printf("fibonacci series=%d\t%d",f,s);
	for(i=1;i<=n;i++)
	{
	t=f+s;
	printf("\t%d",t);
	f=s;
	s=t;
	}
}
