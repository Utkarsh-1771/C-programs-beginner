//prime palindrome in a range 
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j,k,c,r=0,rev=0;
	printf("enter starting and ending value of the range ");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{ 
			if(i%j==0)
			c++;
		}
		if(c==2)
		{
			if(i<=9)
			printf("%d,",i);
		else
		{
			k=i;
			while(k!=0)
			{
				r=k%10;
				rev=rev*10+r;
				k=k/10;
			}
			if(rev==i)
			printf("%d,",i);
		}
	}
	}
}
