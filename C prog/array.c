#include<stdio.h>
int main()
{
int i,j,n,temp;
scanf("%d", &n);
int ar[n];
for(i=0; i<n; i++)
{
    scanf("%d", &ar[i]);
}
for(i=0; i<n; i++)
{
    for(j=1; j<n-1; j++)
    {
        if(ar[j]<ar[j-1])
        {
            temp = ar[j];
            ar[j] = ar[j-1];
            ar[j-1] = temp;
        }
    }
}
printf("Second largest value is %d\n", ar[n-1]);
printf("Second smallest value is %d\n", ar[n]);
return 0;
}
