#include <stdio.h>
int main()
{
	int a=3,b=4,i=0;
	while (i<100)
	{
		if (i%a==0 || i%b==0)
			printf("%d,",i);
		i++;
		
	
	}
	
	return 0;
}