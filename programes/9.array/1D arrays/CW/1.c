
#include<stdio.h>
 int main () {

    int n;
    printf("Array's size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter array elements:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("array element are there: \n");

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

 }