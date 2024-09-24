#include<stdio.h>
int main () {

    int n;
    printf("enter your size");
    scanf("%d",&n);

    int arr[n];

    printf("enter your elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf(" your elements: \n");

    for(int i =n-1;i>0;i--){
        int count=1;

        for(int j=i-1;j>0;j--){
            if(arr[i>arr[j]]){
                count++;
            }
        }
        printf("%d",count++);
    }


    return 0;

}