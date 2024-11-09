#include<stdio.h>
int main()
{
	int s,i;
	printf("enter size of the array ");
	scanf("%d\n",&s);
	char a[s];
	for(i=0;i<s;i++)
	{
		scanf("%c\n",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		int b=a[i];
		printf("%d ",b);
	}
}