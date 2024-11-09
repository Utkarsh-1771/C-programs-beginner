#include<stdio.h>
int main()
{
	int i,n,s,l,u,mid;
	printf("enter the size of the array=");
	scanf("%d",&s);
	l=0;
	u=s-1;
	int a[s];
	printf("please enter the array in ascending order\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to find ");
	scanf("%d",&n);
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==n)
		{
			printf("element found at index %d",mid);
			break;
			}
			if(a[mid]<n)
			{
				l=mid+1;
			}
			if(a[mid]>n)
			{
				u=mid-1;
			}
		}
	}
			
	