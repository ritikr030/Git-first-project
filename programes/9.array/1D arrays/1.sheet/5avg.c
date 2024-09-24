
#include<stdio.h>
int main () {


    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int sum=0;
    

    int arr[n];

    printf("enter your elements: \n");

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        printf("arrary's elements:\n ");

            for(int i=0;i<n;i++){

                sum=sum+arr[i];
            }

            printf("avg= %d\n",sum/n);
            
    return 0;
}