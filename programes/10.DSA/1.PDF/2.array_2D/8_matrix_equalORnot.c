#include<stdio.h>
int main () {

    int r;
    printf("enter your row size:");
    scanf("%d",&r);

    int c;
    printf("enter your column size:");
    scanf("%d",&c);

    int count=0;

    int arr[r][c];
    int arr2[r][c];

    printf("enter your 1st array elements\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
       
    }

    printf("enter your 2nd array elements\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
       
    }

    printf("these are arrays elements: \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==arr2[i][j]){

                  count++; 
            }
        }
        printf("\n");
    }

        if(count>0){
             printf("both are equal");
        }else{
            printf("both are not equal");
        }

    return 0;
}