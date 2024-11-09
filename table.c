// program to print multiple of 3 from 15 to 0 in reverse order.
#include<stdio.h>
int main()
{
	int i=15;
	while(i>=0)
	{
		printf("3x%d=%d\n",i,3*i);
		i--;
	}
}
