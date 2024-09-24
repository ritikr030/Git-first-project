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
 int min=arr[0][0];
    printf("these are arrays elements: \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            if(min>arr[i][j]){
                min=arr[i][j];
            }

        }
        printf("\n");
    }

    printf("min=%d",min);

    return 0;
}