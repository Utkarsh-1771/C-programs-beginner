#include<stdio.h>
int main()
{
	int s,i,n,idx;
	printf("enter size of the array ");
	scanf("%d\n",&s);
	int a[s+1];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the index where you want to add the element ");
	scanf("%d",&idx);
	if(idx<s)
	{
		printf("enter the element you want to add ");
	    scanf("%d",&n);
		a[s]=a[idx];
		a[idx]=n;
		for(i=0;i<=s;i++)
	{
		printf("%d ",a[i]);
	}
	}
	else
	printf("input out of index");
}