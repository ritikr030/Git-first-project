
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

    int max=arr[0];

    printf("max element is: \n");

        for(int i=0;i<n;i++){
            
            if(max<arr[i]){

                max=arr[i];
            }
               
        }
        printf("%d",max);
    return 0;
}