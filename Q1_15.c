#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    int x1, x2, y1, y2, d1, d2;
    float D, A, r, x, y;
    printf("Enter the value of x1 ",x1);
    scanf("%d",&x1);
    printf("Enter the value of y1 ",y1);
    scanf("%d",&y1);
    printf("Enter the value of x2 ",x2);
    scanf("%d",&x2);
    printf("Enter the value of y2 ",y2);
    scanf("%d",&y2);
    d1 = x2-x1;
    d2 = y2-y1;
    x = pow(d1,2);
    y = pow(d2,2);
    D = sqrt(x + y);
    r = D/2;
    A = PI*r*r;
    printf("Area A = %f",A);
    return 0;
}