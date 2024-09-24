#include<stdio.h>

    void input(int row,int column,int arr[row][column]){

    printf("enter your elememts:\n");

    for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

            scanf("%d",&arr[i][j]);

        }
    }   
        return;
    }

    void output(int row,int column,int arr[row][column]){
    printf("enter your elememts:\n");

    for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }   
        return;
    }
    

int main () {

    int row;
    printf("enter your row: ");
    scanf("%d",&row);

    int column;
    printf("enter your column: ");
    scanf("%d",&column);

    int arr[row][column];

        input(row,column,arr);
        output(row,column,arr);

    return 0;
}