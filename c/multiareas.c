#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    // Area of a circle with radius 5
    double radius = 5.0;
    double circle_area = PI * radius * radius;
    printf("Area of circle with radius %.2f: %.2f\n", radius, circle_area);
    
    // Area of a rectangle with length 10 and width 5
    double length = 10.0;
    double width = 5.0;
    double rectangle_area = length * width;
    printf("Area of rectangle with length %.2f and width %.2f: %.2f\n", length, width, rectangle_area);
    
    // Area of a square with side 4
    double side = 4.0;
    double square_area = side * side;
    printf("Area of square with side %.2f: %.2f\n", side, square_area);
    
    // Area of a parallelogram with base 6 and height 3
    double base = 6.0;
    double height = 3.0;
    double parallelogram_area = base * height;
    printf("Area of parallelogram with base %.2f and height %.2f: %.2f\n", base, height, parallelogram_area);
    
    return 0;
}