#include <stdio.h>
int sumoftwo(int ,int );
int main()
{
	int a=7,b=8;
	printf("Total=%d\n",sumoftwo(a,b));
	printf("Total=%d\n",a);
	return 0;
}
int sumoftwo(int  x,int  y)
{
	x=x*5;
	return x+y;
}