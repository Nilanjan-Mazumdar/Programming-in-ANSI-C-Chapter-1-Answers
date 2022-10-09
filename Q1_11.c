// Compute the area of triangle using A = sqrt of S(S-a)(S-b)(S-c) where a, b and c are sides of triangle and 2S
// = a + b + c. Write a program ot comput the area of the triangle given the values of a, b and c.
#include<stdio.h>
#include<math.h>
int main()
{
    float A, S, d, e;
    int a, b, c;
    printf("Enter the value of side a ",a);
    scanf("%d",&a);
    printf("Enter the value of side b ",b);
    scanf("%d",&b);
    printf("Enter the value of side c ",c);
    scanf("%d",&c);
    e = a + b + c;
    S = e/2;
    d = (S*(S-a)*(S-b)*(S-c));
    A = sqrt(d);
    printf("Area = %f",A);
    return 0;
}