
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

        //printf("arrary's elements:\n ");

            for(int i=0;i<n;i++){
                sum=sum+arr[i];
            }
            
            printf("arrays sum= %d\n",sum);
    return 0;
}