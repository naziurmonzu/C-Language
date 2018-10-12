#include <stdio.h>
int main()
{
    int X;
    double Y;
    scanf("%d%lf", &X, &Y);
    printf("%.3lf km/1\n", X/Y);
    return 0;
}
