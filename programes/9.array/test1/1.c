#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];
    int brr[n];

    printf("enter your elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    int start=2;
    int end=n-2;
    
     while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

    // for(int i=0;i<n;i++){

    //       brr[i]=arr[n-i-1];
    // }

    
    printf("elelments are: \n");

    for(int i=0;i<n;i++){

        printf("%d ",arr[i]);
    }

    return 0;

}