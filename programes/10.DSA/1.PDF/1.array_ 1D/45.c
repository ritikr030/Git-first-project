
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

    printf("arrays elements are: ");

        for(int i=0;i<n;i++){
           if(arr[i]==i){
            printf("%d ",arr[i]);
           }
        }

    return 0;
}