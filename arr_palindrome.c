#include<stdio.h>
int main()
{
	int i,n,s,r=0,rev=0,t;
	printf("enter the size of the array ");
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
	if(a[i]<=9)
		printf("palindrome elements= %d\n",a[i]);
		else
		{
			t=a[i];
			rev=0;
		while(t!=0)
		{
			r=t%10;
			rev=rev*10+r;
			t=t/10;
		}
		if(a[i]==rev)
		printf("palindrome elements= %d\n",a[i]);
	}
}
}
