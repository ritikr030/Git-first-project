
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

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    printf("arrays elements are: \n");

    int n2;
    printf("which max you want?? :");
    scanf("%d",&n2);

        printf("%d is the %d max element ",arr[n-n2],n2); 

    return 0;
}