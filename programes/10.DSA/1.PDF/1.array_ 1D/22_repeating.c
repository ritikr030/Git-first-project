

#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    int count=0;
 
    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

  printf("arrays elements are: \n");

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]==arr[j]){
                count++;

                printf("repeated number is %d\n",arr[i]);
            }
        }
    }
       printf("count=%d\n",count);

    return 0;
}