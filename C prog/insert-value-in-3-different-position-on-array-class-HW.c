
#include<stdio.h>
int main()
{
    int i,n,a[100],c,x,y,z;
    printf("enter array size:");
    scanf("%d",&n);
    printf("array values: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\t********output********\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    int position,value,position1,position2,value1,value2;
    printf("choose 1st position : ");
    scanf("%d",&position);
    printf("enter value :");
    scanf("%d",&value);

    printf("choose 2nd position : ");
    scanf("%d",&position1);
    printf("enter value :");
    scanf("%d",&value1);

    printf("choose 3rd position : ");
    scanf("%d",&position2);
    printf("enter value :");
    scanf("%d",&value2);

    for(i=n-1; i>=position-1; i--)
    {
        a[i+1]=a[i];
    }
    a[position-1]=value;


    //***********

    for(i=n; i>=position1-1; i--)
    {
        a[i+1]=a[i];
    }
    a[position1-1]=value1;

    //*************
    for(i=n+1; i>=position2-1; i--)
    {
        a[i+1]=a[i];
    }
    a[position2-1]=value2;
    //******************

    printf(" new output: \n");
    for(i=0; i<=n+2; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}












