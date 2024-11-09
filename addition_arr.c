#include<stdio.h>
int main()
{
	int i,n,m;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no to be included ");
	scanf("%d",&m);
	a[n]=m;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
	
	