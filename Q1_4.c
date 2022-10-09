// Given the calues of three variables a, b and c, write aprogram to compute and display the values off x where 
// x = a/(b - c)
#include<stdio.h>
int main()
{
    float x;
    int a, b, c;
    a = 250;
    b = 85;
    c = 25;
    x = a/(b - c);
    printf("%f",x);
    return 0;
}