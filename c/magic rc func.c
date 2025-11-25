#include <stdio.h>
int power(int,int);
int rec(int, int);
int main()
{
	int m=3,n=4;
	int a=6,b=3;
	printf("power=%d\n",power(m,n));
		printf("rec=%d\n",rec(a,b));
	return 0;
}
int power(int a,int b)
{
	int ans=1;
	while(b>0)
	{
		ans=ans*a;
		b--;
	}
	return ans;
}
int rec(int a,int b)
{
	
		int ans=1;
	while(b>0)
	{
		ans=ans*a;
		b--;
	}
	return ans;
	
}
