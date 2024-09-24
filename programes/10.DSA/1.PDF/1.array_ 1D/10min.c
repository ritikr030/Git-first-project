
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

    int min=arr[0];

    printf("min element is: \n");

        for(int i=0;i<n;i++){
            
            if(min>arr[i]){

                min=arr[i];
            }
        
        }
        printf("%d",min);
    return 0;
}