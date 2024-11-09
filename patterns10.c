#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(j=5-i;j>=1;j--)
		{
		printf(" ");
    	}
    	for(j=i;j>=1;j--)
    	{
    		printf("* ");
		}
	printf("\n");
	}
}
