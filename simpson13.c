#include <stdio.h>
#include <conio.h>
#define y(x) (exp(x))

int main()
{
    int n;
    float x0, xn, h, y;
    printf("Enter the value of x0,xn,n: ");
    scanf("%f%f%d", &x0, &xn, &n);
    h = (xn - x0) / n;
    int sum = sum + y(x0) + y(xn);
    for (int i = 1; i < n; i + 2)
    {
        sum = sum + 4 * y(x0 + i * h);
    }
    for (int i = 2; i < n; i + 2)
    {
        sum = sum + 2 * y(x0 + i * h);
    }
    printf("The value of integral is %f", (h / 3) * sum);
}
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)
                                                                                                                                                                                                      int
                                                                                                                                                                                                      main()
{
    float lower, upper, intgrl = 0.0, stepSize, k;
    int i, subInterval;
    clrscr();
    printf("Enter lower integration limit: ");
    scanf("%f", &lower);
    printf("Enter upper integration limit: ");
    scanf("%f", &upper);
    printf("Enter sub intervals: ");
    scanf("%d", &subInterval);
    stepSize = (upper - lower) / subInterval;
    intgrl = f(lower) + f(upper);
    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        if (i % 2 == 0)
        {
            intgrl = intgrl + 2 * f(k);
        }
        else
        {
            intgrl = intgrl + 4 * f(k);
        }
    }
    intgrl = intgrl * stepSize / 3;
    printf("The integration is: %.3f", intgrl);
    getch();
    return 0;
}