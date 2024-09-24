
#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];
    int brr[n];

    printf("enter array element: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }

        for(int i=0;i<n;i++){
         brr[i]= arr[n-1-i];
    }

    printf("Arrays elements:\n ");

    for(int i=0;i<n;i++){

        printf("rev=%d",brr[i]);
    }

    return 0;
}