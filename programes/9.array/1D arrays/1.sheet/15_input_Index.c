

#include<stdio.h>
int main () {

    int size;
    printf("enter your size: ");
    scanf("%d",&size);
    
    int arr[size];

    printf("Arrays elements: ");

    
    for(int i=0;i<size;i++){

        scanf("%d",&arr[i]);
    }

    int n;
    printf("index number : ");
    scanf("%d",&n);


        printf("%d",arr[n]);

    return 0;
}