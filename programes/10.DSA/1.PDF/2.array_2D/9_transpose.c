#include<stdio.h>
int main () {

    int r;
    printf("enter your row size:");
    scanf("%d",&r);

    int c;
    printf("enter your column size:");
    scanf("%d",&c);

    int arr[r][c];
    int brr[r][c];

    printf("enter your elements\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
       
    }

    printf("these are arrays elements: \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           printf("%d ",arr[i][j]);
           brr[j][i]=arr[i][j];
        }
        printf("\n");
    }

       printf("these are transpose elements: \n");

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){

         printf("%d ",brr[i][j]);  
         
        }
        printf("\n");
    }

    return 0;
}