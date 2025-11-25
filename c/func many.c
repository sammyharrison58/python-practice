#include <stdio.h>
float calca(float);//func dec
float calcv(float);
int main()
{
	float radius,x;
	printf("Enter the radius :");
	scanf("%f",&radius);
	x=calca(radius);
	printf("The area = %fcm\n",x);
	printf("The volume of sphere = %fcm\n", calcv(radius));
	
	
	return 0;
}
float calca(float r)//func def
{
		float area;
		area=3.142*r*r;
		return area;
}
	float calcv(float r)
{
	float vol;
	vol=4.0/3*3.142*r*r*r;
	return vol;
}
