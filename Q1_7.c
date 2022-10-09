/* Given two integers 20 and 10, write a program that uses a function add() to add these two numbers and sub() to
find the difference of these two numbers and then display the sum and difference it the given from */
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int main()
{
    int a, b, c, d;
    a = 20;
    b = 10;
    c = add(a,b);
    d = sub(a,b);
    printf("%d + %d = %d \n",a,b,c);
    printf("%d - %d = %d",a,b,d);
}
int add(int a, int b)
{
    int e;
    e = a + b;
    return e;
}
int sub(int a, int b)
{
    int f;
    f = a - b;
    return f;
}