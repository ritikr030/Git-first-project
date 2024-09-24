#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=arr[n-1];
    int min2=arr[n-1];

    printf("arrays elements are: ");

        for(int i=0;i<n;i++){
            
            if(min>arr[i]){
                min=arr[i];
            }
        }

         for(int i=0;i<n;i++){
            
            if(min2>arr[i] && min<arr[i]){
                min2=arr[i];
            }
        }
        printf("%d",min2);

    return 0;
}