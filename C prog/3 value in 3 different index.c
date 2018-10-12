#include<stdio.h>
int main()
{
    int i=0,a[20],n,newv1,newv2,newv3,newi1,newi2,newi3,x;
    printf("how many data u want: ");
    scanf("%d",&n);
    printf("array values are: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("new values: ");
    scanf("%d",&newv1);
    scanf("%d",&newv2);
    scanf("%d",&newv3);
    printf("new indexes: ");
    scanf("%d",&newi1);
    scanf("%d",&newi2);
    scanf("%d",&newi3);
    if(newi1<newi2 && newi1<newi3){
        {
        x=newi1;}
    else if(newi2<newi1 && newi2<newi3){
        x=newi2;
    }
    else(newi3<newi1 && newi3<newi2){
        x=newi3;}
    }
    for(i=n-1;i<=x;i--){
            a[i+3]=a[i];
    }
    a[newi1]=newv1;
    a[newi2]=newv2;
    a[newi3]=newv3;
    printf("new array is: ");
    for(i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
