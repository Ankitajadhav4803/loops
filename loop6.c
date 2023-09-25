/* c program to accept a character, an integer n and display the next n characters */
#include<stdio.h>
void  main()
{
	char ch;
	int n,i=1;
	printf("enter any character=");
	scanf("%c",&ch);
	printf("enter any number=");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%c\t",ch++);
		i++;
	}
}
