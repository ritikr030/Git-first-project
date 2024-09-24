#include<stdio.h>
int main () {

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];
   // int min=arr[0];

    printf("enter your elements : ");

    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }

    printf("elaemets are: ");

    for(int i=0;i<n;i++){
        if(>arr[i]){

            min=arr[i];
        }

        printf("min=%d",min);
    }

    return 0;
}