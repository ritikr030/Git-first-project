
#include<stdio.h>
int main () {
    
    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

    }

    int a;
    printf("enter your number: ");
    scanf("%d",&a);

    printf("arrays elements are: ");

     printf("%d",arr[a]);

    return 0;
}