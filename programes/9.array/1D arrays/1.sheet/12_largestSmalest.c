
#include<stdio.h>
int main () {

    int n;
    printf("enter your size : ");
    scanf("%d",&n);

    int arr[n];

    printf("enter your elements : ");

    int max=-99999;
    int min=999999;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }

        if(min>arr[i]){
            min=arr[i];
        }
    } 

    printf("min=%d\n",min);
    printf("max=%d",max);

    return 0;
}