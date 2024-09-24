#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter your elements: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    int a;
    printf("enter your start: ");
    scanf("%d",&a);

    int b;
    printf("enter your end: ");
    scanf("%d",&b);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(arr[j]>arr[j+1]){

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }

    }
    
    int start = a;
    int end = b;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }

    return 0;

}