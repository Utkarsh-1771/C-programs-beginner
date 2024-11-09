#include<stdio.h>
void main()
{
	int a, b, gcd = 1, lcm = 1,min, max;
    printf("Enter a=");
    scanf("%d",&a);    
    printf("Enter b=");
    scanf("%d",&b);
    min = a;
    if (min > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    while (max > min)
    {
        int r = max % min;
        if (r == 0)
        {
            gcd = min;
            break;
        }
        else
        {
            max=min;
            min=r;
        }
    }
    lcm=(a*b)/gcd;
    printf("LCM:%d",lcm);
    printf("\nGCD:%d",gcd);
}
