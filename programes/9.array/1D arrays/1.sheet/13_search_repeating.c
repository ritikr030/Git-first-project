
#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int count=1;

    int arr[n];

    printf("enter array element: \n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Arrays elements:\n ");

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]==arr[j]){
                count++;
                
                 printf("repeting number=%d\n",arr[i]);
                break;
            }

               
        }
    }

    printf("count=%d",count);

    return 0;
}