
#include<stdio.h>
int main ( ){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int evencount=0;
    int oddcount=0;

    int arr[n];

    printf("enter your elements: \n");

        for(int i=0;i<n;i++){
            scanf("%d\n",&arr[i]);
        }


        for(int i=0;i<n;i++){
            
            if(arr[i]%2==0){

                evencount++;
            }else{
                oddcount++;
            }
              

        } 
        printf("Number of even elements: %d\n", evencount);
        printf("Number of odd elements: %d\n", oddcount);


    return 0;

}