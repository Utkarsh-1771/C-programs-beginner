#include<stdio.h>
int main()
{
	int a,b,i,j=1,c=0;
	scanf("%d,%d",&a,&b);
	i=a;
	while(i<=b)
	{
		while(j<=i)
		{
		if(i%j==0)
		c++;
		j++;
	}
	j=1;
	if(c==2)
         printf("%d ",i);
         c=0;
	    i++;
    }
		
}
