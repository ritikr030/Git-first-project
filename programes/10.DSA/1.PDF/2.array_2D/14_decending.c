#include<stdio.h>
int main () {

    int r;
    printf("enter your row size:");
    scanf("%d",&r);

    int c;
    printf("enter your column size:");
    scanf("%d",&c);

    int arr[r][c];

    printf("enter your elements\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
       
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           for(int k=0;k<r;k++){
            for(int l=0;l<c;l++){

                if(arr[k][l]<arr[i][j]){  //descending
                    int temp=arr[k][l];
                    arr[k][l]=arr[i][j];
                    arr[i][j]=temp;
                }
            }
           }
        }
        printf("\n");
    }
    
      printf("these are asc arrays elements: \n");
         

         
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}