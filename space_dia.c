#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			if((j==1)||(j==(2*i)-1))
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=5-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=(2*i)-1;j>=1;j--)
		{
			if((j==1)||(j==(2*i)-1))
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
}