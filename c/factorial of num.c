#include <stdio.h>
int main()
{
	 int n;
	 int ans=1;
	 printf("enter n:");
	 scanf("%d",&n);
	 for(n;n>0;n--)
	 	ans=ans*n;
	 
	 printf("Factorial = %d", ans);

		
	return 0;
}