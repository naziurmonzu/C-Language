#include<stdio.h>
int main()
{
    int A,B;
    float C,D;
    scanf("%d%d", &A, &B);
    scanf("%f", &C);
    D = B*C;
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %0.2f\n", D);
    return 0;
}
