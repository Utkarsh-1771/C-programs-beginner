#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character ");
	ch=getchar();
	if(ch>=65&&ch<=90)
	{
	printf("1\t");
	putchar(ch);
    }
	else if(ch>=97&&ch<=122)
	{
	printf("0\t");
	putchar(ch);
    }
	else
	{
	printf("-1\t");
	putchar(ch);
    }
}
