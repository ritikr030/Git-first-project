
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
           
            if(arr[i]==0){
                printf("%d ",arr[i]);
            }

            if(arr[i]==1){
                printf("%d ",arr[i]);
            }

            // if(arr[i]=0 || arr[i]!=1){
            //     printf("%d ",arr[i]);
            // }else{

            //     printf("%d not valid",arr[i]);
            // }
            
        }

    return 0;
}