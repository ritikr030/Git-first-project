#include<stdio.h>
int main(){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int arr[n];
    int brr[n];

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

        brr[i]=arr[n-1-i];
    }

    
    for(int i=0;i<n;i++){
        int *a=&brr[i];

        printf("%d ",brr[i]);
        
    }

    return 0;
}