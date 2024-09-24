
#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    int sum=0;

 
    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    int max=arr[0];


    printf("arrays elements are: \n");

        for(int i=0;i<n;i++){
            
           if(max<arr[0]){
            max=arr[i];
           }

        }

        int arr2[max];

        for(int i=0;i<n;i++){
            for(int j=0;j<max;j++){


                if(arr[i]!=arr2[j]){
                    printf("%d is missing",arr2[j]);
                    break;
                }

            }


        }

    return 0;
}