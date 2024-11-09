#include<stdio.h>
int main()
{
	int i,n,max,min;
	printf("enter the size of the array=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("max=%d\n",max);
	printf("min=%d",min);
}