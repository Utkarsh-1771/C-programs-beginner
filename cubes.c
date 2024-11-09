// program to print first 15 numbers from series 1,8,27,64,125,...
#include<stdio.h>
int main()
{
	int i=1;
	while(i<11)
	{
		printf("%d,",i*i*i);
		i++;
	}
}
