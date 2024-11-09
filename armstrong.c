//armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,p,c=0,sum=0,r=0;
	printf("please enter a number ");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		num=num/10;
		c++;
	}
	num=n;
	while(num!=0)
	{
		r=num%10;
		sum=sum+((int)pow(r,c));
		num=num/10;
	}
	if(sum==n)
	printf("armstrong number");
	else
	printf("not a armstrong number");
}
