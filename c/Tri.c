#include <stdio.h>
int main()
{
	int i, j;
	for (j = 0; j <= 5; j++)
	{


		for (i = 0; i <=5; i++)
		{
			if(i<(5-j))
			{
					printf(" ");
			}
		else
		{
				printf("* ");
		}   	   	  
		}
			printf("\n");
	}
	return 0;
}
