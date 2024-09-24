
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

    int a;
    printf("which element you want to del: \n");
    scanf("%d",&a);

    for(int i=a-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    printf("arrays elements are: ");

        for(int i=0;i<n-1;i++){
            printf("%d ",arr[i]); 
        }

    return 0;
}