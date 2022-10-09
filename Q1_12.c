#include<stdio.h>
int main()
{
    int x,y;
    float S,D,P,Div;
    printf("X = ",x);
    scanf("%d",&x);
    printf("Y = ",y);
    scanf("%d", &y);
    S = x+y;
    D = x-y;
    P = x*y;
    Div = x/y;
    printf("X = %d Y = %d\nsum = %3.1f Difference = %3.2f\nProduct = %3.2f Division = %3.2f",x,y,S,D,P,Div);
    return 0;
}
