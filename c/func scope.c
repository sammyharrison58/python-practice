#include <stdio.h>
int power(int,int);
int main()
{
	int m=3,n=4;
	printf("power=%d\n",power(m,n));
	return 0;
}
int power(int a,int b)
{
	if (b==1)
		return a;
	else
		return a*power(a,b-1);
	
}
