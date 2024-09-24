#include<stdio.h>
int main () {

    int row;
    printf("enter your row: ");
    scanf("%d",&row);

    int column;
    printf("enter your column: ");
    scanf("%d",&column);

    int max=-99999;
    int min=99999;


    int arr[row][column];

    printf("enter your elememts:\n");

    for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

            scanf("%d",&arr[i][j] );

        }
    }   

    printf("array elments:\n");

    for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

            printf("%d ",arr[i][j] );

            if(max<arr[i][j]){
                max=arr[i][j];
            }

            if(min>arr[i][j]){

                 min=arr[i][j];
            }

        }

        printf("\n");
    }

    printf("max=%d\n",max);
     printf("min=%d",min);
    

    return 0;
}