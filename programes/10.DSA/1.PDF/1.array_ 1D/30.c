
#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    int n2;
    printf("enter your 2nd array size: ");
    scanf("%d",&n);

    int arr2[n2];

 
    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

       for(int j=0;j<n;j++){

        scanf("%d",&arr2[j]);
    }

    printf("arrays elements are: ");

        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){

                if(arr[i]==arr[j]){
                    printf("%d",arr[i]);
                }
           }
        }

    return 0;
}