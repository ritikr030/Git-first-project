#include<stdio.h>
int main () {

    int r;
    printf("enter your row size:");
    scanf("%d",&r);

    int c;
    printf("enter your column size:");
    scanf("%d",&c);

    int arr[r][c];
    int arr2[r][c];

    printf("enter your elements\n");

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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

 printf("these are 2nd arrays elements: \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("sum of both arrays");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}