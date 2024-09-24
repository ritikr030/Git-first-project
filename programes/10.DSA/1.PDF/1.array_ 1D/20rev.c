
#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];
    int brr[n];
 
    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
         brr[i]= arr[n-i-1];
    }

    printf("arrays elements are: ");

        for(int i=0;i<n;i++){
            printf("%d ",brr[i]); 
        }

    return 0;
}