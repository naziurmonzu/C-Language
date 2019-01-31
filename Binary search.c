#include<stdio.h>
int main()
{
    int n,a[20],m,i;
    printf("how many elements u want:\n");
    scanf("%d",&n);
    printf("array is:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("want to search:");
    scanf("%d",&m);
    int min,max,mid;
    min=0;
    max=n-1;
    mid=(min+max)/2;
    while(min<=max){
            if(a[mid]==m){
            printf("%d found at location %d.\n",m, mid+1);
                break;
            }
            else if(a[mid]<m){
                min=mid+1;
            }
            else{
                max=mid-1;
            }
            mid=(min+max)/2;
    }
    if(min>max){
        printf("data not found");
    }
return 0;
}
