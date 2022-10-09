// Relationship between Celcious and Fahrenheit is governed by the formula F = 9C/5 + 32
// write a program to convert the temperature
// a) from Celcious to Fahrenheit
#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter the temperature in Celcious ",C);
    scanf("%f",&C);
    F = 9*C/5 + 32;
    printf("%f degree fahrenheit",F);
    return 0;
}