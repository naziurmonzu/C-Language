#include<stdio.h>
int main()
{
    int a[20],n,i=0,newv,newi;
    printf("array data size: ");
    scanf("%d",&n);
    printf("array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("new value: ");
    scanf("%d",&newv);
    printf("new index: ");
    scanf("%d",&newi);
    for(i=n-1;i>=newi;i--){
        a[i+1]=a[i];
    }
    a[newi]=newv;
    for(i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
