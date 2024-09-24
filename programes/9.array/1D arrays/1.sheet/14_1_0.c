#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter array element: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Arrays elements:\n ");

    for(int i=0;i<=n;i++){
        
        if(arr[i]==1 || arr[i]==0 ){
            printf("%d ",arr[i]);
        }

    }

    return 0;
}