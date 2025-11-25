#include <stdio.h>
int factr(int);
int main()
{
	int n=6;
	printf("Factorial=%d\n",factr(n));
	return 0;
}
int factr(int num)
{
	 int ans=1;
	while(num>1)
	{
		ans=ans*num;
		num--;
	
	}
		return ans;
}
