#include<stdio.h>
int main(){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int arr[n];
    int brr[n];

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
        
    
    }

    int a;
    printf("enter your searching number: ");
    scanf("%d",&a);

    int *x=&a;


    
    for(int i=0;i<n;i++){
        if(*x==arr[i]){
            printf("%d is found at %d index",*x,i);
        }
        
    }
    return 0;
}