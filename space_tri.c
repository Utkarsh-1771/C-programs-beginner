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
			if((j==(2*i)-1)||(j==1))
			printf("*");
			else if((i==5)&&((j!=1)&&(j!=(2*i)-1)))
			printf("*");
			else
			printf(" ");
		}
        printf("\n");
	}
}
