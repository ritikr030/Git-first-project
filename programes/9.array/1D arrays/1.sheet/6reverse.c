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

    printf("Arrays elements: \n");

    for(int i=n;i>0;i--){
        printf("%d\n",arr[i]);
    }

    return 0;
}