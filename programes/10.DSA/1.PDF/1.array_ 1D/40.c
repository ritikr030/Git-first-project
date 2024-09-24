
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

    printf("arrays elements are: ");

        for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){

            if(arr[i]!=arr[j+1]){

              // int div=arr[i]/arr[j];

    
                  printf("%d",arr[j]);
            }

           }
           
        }

    return 0;
}