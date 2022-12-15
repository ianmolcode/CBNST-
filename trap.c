#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float func(float);

int main()
{
    float x0, xn, h, y;
    int n;
    printf("Enter the value of x0, xn, n: ");
    scanf("%f%f", &x0, &xn, &n);
    h = (xn - x0) / n;
    y = func(x0) + func(xn);
    for (int i = 1; i < n; i++)
        y = y + 2 * func(x0 + h * i);
    y = (h / 2) * y;
    ;
    printf("The value of integral is %f", y);

    return 0;
}
float func(float x)
{
    return (x * x);
}