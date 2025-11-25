#include <stdio.h>
int main()
{
	int a=3,b=4,i=1;
	while (i<100)
	{
		if (i%a==0 || i%b==0)
			printf("%d,",i);
		
		if (i%a==0 && i%b==0)
			break;
		i++;
		
	
	}
	
	return 0;
}