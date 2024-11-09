#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=6-i;j>=1;j--)
		{
			printf("*");
		}
		for(j=(2*i)-3;j>=1;j--)
		{
			printf(" ");
		}
		for(j=6-i;j>=1;j--)
		{
			if(j!=5)
			printf("*");
		}
		printf("\n");
	}
}
