
#include<stdio.h>
int main (){

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int arr[n];

    int evensum=0;
    int oddsum=0;

    int evenCount=0;
    int oddCount=0;

    int avgEven=0;
    int avgOdd=0;

    printf("enter array element:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Arrays elements:\n");

    for(int i=0;i<n;i++){
    
        if(arr[i]%2==0){
            evensum=evensum+arr[i];

            evenCount++;

             avgEven=evensum/evenCount;

        }else{
            oddsum=oddsum+arr[i];

            oddCount++;
            
            avgOdd=oddsum/oddCount;
         }

    }
        printf("avgEven=%d\n",avgEven);
          printf("avgOdd=%d\n",avgOdd);

    
    return 0;
}