
#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr1[n];
    int arr2[n];
    int arr3[n];

    
    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr1[i]);
    }

      printf("enter your 2nd arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr2[i]);
    }
      printf("enter your 3rd arrays elements: \n");

      for(int i=0;i<n;i++){

        scanf("%d",&arr3[i]);
    }

    printf("arrays elements are: ");

        for(int i=0;i<n;i++){
           
           if(arr1[i]/arr2[i] && arr2[i]/arr3[i]){

            printf("%d ",arr1[i]);

           }

        }

    return 0;
}