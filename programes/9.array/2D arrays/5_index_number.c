#include<stdio.h>
int main () {

    int row;
    printf("enter your row: ");
    scanf("%d",&row);

    int column;
    printf("enter your column: ");
    scanf("%d",&column);


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

        }

        printf("\n");
    }

    
    int r1;
    printf("enter your row: ");
    scanf("%d",&r1);

    int c1;
    printf("enter your column: ");
    scanf("%d",&c1);


    printf("%d",arr[r1][c1]);

    return 0;
}