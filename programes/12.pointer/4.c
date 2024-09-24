#include<stdio.h>
int main () {

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];

    int *p=arr;


    for(int i=0;i<n;i++){
        
        scanf("%d",&p[i]);

    }

    for(int i=0;i<n;i++){
        printf("%d ",p[i]);

    }

    

    return 0;
}