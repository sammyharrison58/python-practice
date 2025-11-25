#include <stdio.h>
int sumoftwo(int,int);
int main()
{
	int a,b,sum;
	a=7;b=8;
	sum=a+b;
	printf("Total=%d\n",sumoftwo(a,b));
	
	return 0;
}
int sumoftwo(int x,int y)
{
	
	return x+y;
}