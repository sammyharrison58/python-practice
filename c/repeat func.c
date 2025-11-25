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
if (num<2)
	return 1;
else
	return num*factr(num-1);
}
