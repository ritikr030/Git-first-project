
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

    int sum;
    printf("enter your number: \n");
    scanf("%d",&sum);

    printf("arrays elements are: \n");

    int found=0;

        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
    
            if (arr[i]+arr[j]==sum){
                
               printf("pair found(%d , %d)\n",arr[i],arr[j]);

                found=1;
            }
           }
        }

        if(!found){
            printf("pair is not found");
        }

    return 0;
}