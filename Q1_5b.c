// Relationship between Celcious and Fahrenheit is governed by the formula F = 9C/5 + 32
// write a program to convert the temperature
// b) from Fahrenheit to Celcious
#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter the temperature in Fahrenheit ", F);
    scanf("%f", &F);
    C = (F - 32)*5/9;
    printf("%f degree celcious", C);
    return 0;
}