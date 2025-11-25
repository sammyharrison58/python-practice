#include <stdio.h>
int main()
{
	float radius,area;
	printf("Enter the radius :");
	scanf("%f",&radius);
	area=3.142*radius*radius;
	printf("The area = %fcm", area);
	
	return 0;
}