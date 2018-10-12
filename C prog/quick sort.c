#include<stdio.h>

void Quicksort(int a[], int p, int r)
{
    int q;
    q = Partition(a[],p,r);
    Quicksort(a[],p,q-1);
    Quicksort(a[],q+1,r);


}
int Partition(int a[], int p, int r)
{
    int i,x,temp,temp2;
    x=a[r];
    i=p-1;
    for(int j=p; j<r-1; j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        temp2=a[i+1];
        a[i+1]=a[r];
        a[r]=temp2;
    }

    return i+1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    Quicksort(ar[n],0,n-1);

    for(i=0; i<n; i++)
    {
        printf("%d",ar[i]);
    }

    return 0;
}
