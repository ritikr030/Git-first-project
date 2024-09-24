#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    int max=-9999,min=9999;

    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

        if(arr[i]>max){

            max=arr[i];
        }

        if(arr[i]<min){

            min=arr[i];
        }
    }
    
    int seq[max];
    int count=min;
    
    for(int i=0; i<max; i++)
    {
        seq[i]=count;
        count++;
    }
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=seq[i])
        {
            printf("missing element %d, ",seq[i]);
            break;
        }
    }

    
    return 0;
}