#include <stdio.h>
int main()
{
	int i, j;
	for (j = 0; j <= 5; j++)
	{


		for (i = 0; i <5-j; i++)
		{

			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
