
#include<stdio.h>

    void input(int arr[],int n){
    printf("enter your elements: ");

    for(int i=0;i<n;i++){

        scanf("%d\n",&arr[i]);
    }
    }

    void output(int arr[],int n){
         printf("elements are:  ");

    for(int i=0;i<n;i++){

        printf("%d",arr[i]);
    }
    }

int main () {

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];


    input(arr,n);
    
    
    output(arr,n);

    return 0;
}