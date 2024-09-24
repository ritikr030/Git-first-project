
#include<stdio.h>

int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

     int arr[n];

        printf("arrays elements: ");

      for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

     }

    int n1;
    printf("enter your number: ");
    scanf("%d",&n1);

    for(int i=0;i<n;i++){

        if(arr[i]==n1){
            printf("%d is  present",n1);
        }
        
        
        // else{
        //       printf("%d is not  present",n1);
        // }

        // if(arr[i]!=n1){
        //     printf("%d is not present",n1);
        //     break;
        // }

    }
     

}           