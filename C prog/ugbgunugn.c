#include<stdio.h>
int main()
{
    int a[20],i,n,p,q,r,s,w,z;
    printf("Enter array size :\n");
    scanf("%d",&n);
    printf("Enter array value :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("enter index number for part 1 :\n");
    scanf("%d",&s);
     for(i=n+1;i>=s;i--){
        a[i+1]=a[i];
    }
    w=300;
    a[s]=w;
     printf("enter index number for part 2 :\n");
    scanf("%d",&s);
     for(i=n+1;i>=s;i--){
        a[i+1]=a[i];
    }
    r=400;
    a[s]=r;

     printf("enter index number for part 3 :\n");
    scanf("%d",&s);
     for(i=n+1;i>=s;i--){
        a[i+1]=a[i];
    }
    z=500;
    a[s]=z;
    printf(" the final array is :\n");
    for(i=0;i<n+3;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
