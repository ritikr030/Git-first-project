
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

    printf("leaders elements are: ");

    int max=arr[n-1];
    printf("%d ",max);

    for(int i=n-2;i>=0;i--){

        if(arr[i]>max){
            
            max=arr[i];

          printf("%d ",max);
        }

    }

    return 0;
}

