#include<stdio.h>
int main()
{
	int i,n,s;
	printf("enter the size of the array ");
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to find ");
	scanf("%d",&n);
	for(i=0;i<=s;i++)
	{
		if(a[i]==n)
		{
			printf("element found at index %d",i);
			break;
		}
	}
}