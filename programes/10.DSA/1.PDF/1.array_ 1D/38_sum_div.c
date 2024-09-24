
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

    printf("arrays elements are: \n");

        for(int i=0;i<n;i++){
           
           sum=sum+arr[i];
        }

        int n2;
        printf("enter your divsible term: \n");
        scanf("%d",&n2);

        printf("sum=%d\n",sum);
        printf("count pair: %d\n",sum/n2);

    return 0;
}