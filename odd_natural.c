// program to find first 10 odd natural numbers.
#include<stdio.h>
int main()
{
	int i=1;
	while(i<21)
	{
		if(i%2!=0)
		printf("%d,",i);
		i++;
	}
}
