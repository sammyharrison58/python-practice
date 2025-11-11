#include <stdio.h>
int main()
{
	int length,width;
	int area;
	printf("enter the length/n");
	scanf("%d",&length);
	printf("enter the width/n");
	scanf("%d",&width);
	area=length*width;
	printf("area = %d",area);
	return 0;
}