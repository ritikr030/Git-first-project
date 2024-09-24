
#include<stdio.h>
int main () {


    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int product=1;

    int arr[n];

    printf("enter your elements: \n");

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        //printf("arrary's elements:\n ");

            for(int i=0;i<n;i++){
                product=product*arr[i];
            }
            
            printf("arrays product= %d\n",product);
    return 0;
}