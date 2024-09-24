
#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];

    int evensum=0;
    int oddsum=0;

    printf("enter array element:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Arrays elements:\n");

    for(int i=0;i<n;i++){
    
        if(arr[i]%2==0){
            evensum=evensum+arr[i];
        }else{
            oddsum=oddsum+arr[i];
        }

    }
        printf("even_sum=%d\n",evensum);
          printf("odd_sum=%d\n",oddsum);

    
    return 0;
}