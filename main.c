#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x = 3.0, b = 6.0, h = 0.3, res;
    while (x <= b)
    {
        if (x < 4)
        {
            res = (1 / (sin(1 / x) + 4));
        }
        else if (x >= 4 && x < 5)
        {
            res = (1 / (pow(x, 2) + log(x)));
        }
        else if (x >= 5)
        {
            res = (tan(pow(x - 3, 3)));
        }
        x += 0.3;
        printf("%lf\n", res );
    }
}


