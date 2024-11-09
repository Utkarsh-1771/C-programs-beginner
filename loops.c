//program to find first ten natural numbers using while,do-while and for loop.
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d,",i++);
	}
	printf("\n");
	i=1;
	do
	{
		printf("%d,",i++);
	}while(i<=10);
	printf("\n");
	i=1;
	for(i=1;i<=10;i++)
	{
		printf("%d,",i);
	}
}

