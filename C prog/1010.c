#include<stdio.h>
int main()
{
    int A,B;
    float C,D,E;
    scanf("%d%d%f", &A, &B, &C);
    D = (B*C);
    scanf("%d%d%f", &A, &B, &C);
    E = D+(B*C);
    printf("VALOR A PAGAR: R$ %0.2f\n", E);
    return 0;
}
