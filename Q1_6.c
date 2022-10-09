/* Given the radius of a circle, write a program to compute and display its area. Use a symbolic constants to define
the pi value and assume a suitable value for radious */
#include<stdio.h>
#define PI 3.14
int main()
{
    float Area, Radius;
    Radius = 10;
    Area = PI * Radius * Radius;
    printf("Area of the circle is %f", Area);
    return 0;
}