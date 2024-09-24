
#include<stdio.h>
int main () {

    int n;
    printf("enter your 1st array size: ");
    scanf("%d",&n);

    int arr[n];

    int n2;
    printf("enter your 2nd array size: ");
    scanf("%d",&n2);

    int arr2[n2];

    int merge=n+n2;

    int mergedArr[merge];

    printf("enter your 1st arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

        mergedArr[i]=arr[i]; // watch these line

    }

    printf("enter your 2nd arrays elements: \n");

    for(int i=0;i<n2;i++){

        scanf("%d",&arr2[i]);

        mergedArr[n+i]=arr2[i]; // watch these line 2

    }

    printf("arrays elements are: ");

        for(int i=0;i<merge;i++){
            printf("%d ",mergedArr[i]); 
        }

    return 0;
}