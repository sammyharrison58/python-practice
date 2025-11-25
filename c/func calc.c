#include <stdio.h>
float calca(float);//func dec
int main()
{
	float radius,x;
	printf("Enter the radius :");
	scanf("%f",&radius);
	x=calca(radius);
	printf("The area = %fcm",x);
	
	return 0;
}
float calca(float r)//func def
{
		float area;
		area=3.142*r*r;
		return area;
}