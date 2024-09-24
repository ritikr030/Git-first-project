
#include<stdio.h>
int main () {


    int n;
    printf("enter your 1st size: \n");
    scanf("%d",&n);

    int arr[n];
    
    int size;
    printf("enter your 2nd size: \n");
    scanf("%d",&size);


    int arr2[size];


    int merged=n+size;

    int mergedArr[merged];

    printf("arr elements:\n");

    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);

        mergedArr[i]=arr[i];

    }

    printf("arr2 elements: ");

    for(int i=0;i<size;i++){
        scanf("%d ",&arr2[i]);

         mergedArr[n+i]=arr2[i];

    }
        
printf("merged :\n");

for(int i=0;i<=merged;i++){

    printf("%d ",mergedArr[i]);

}
    

    return 0;

}