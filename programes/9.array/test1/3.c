#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];

    int n2;
    printf("enter your size: ");
    scanf("%d",&n2);

    int arr2[n2];

    printf("enter your 1st elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

      printf("enter your 2d elements: \n");

    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);

    }
  
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(arr[j]>arr[j+1]){

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }

    }

    for(int i=0;i<n2;i++){
        for(int j=0;j<n2;j++){

            if(arr2[j]<arr2[j+1]){

                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;

            }
        }

    }
    
    printf("elelments  are: \n");

    for(int i=0;i<3;i++){
        printf("%d ",arr[n-i-1]);
        
    }

    for(int i=0;i<3;i++){
        printf("%d ",arr2[n-i-1]);
    }

    return 0;

}