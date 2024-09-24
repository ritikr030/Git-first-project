
#include<stdio.h>
int main () {

    int row;
    printf("enter your row: ");
    scanf("%d",&row);

    int column;
    printf("enter your column: ");
    scanf("%d",&column);

    int arr[row][column];

    int sum=0;

    printf("enter your elememts:\n");

    for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

            scanf("%d",&arr[i][j] );

        }
    }   

    printf("array elments:\n");

    for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

            printf("%d ",arr[i][j]);

        

        }

        printf("\n");
    }
    
            printf("Rowsum: \n");

        for(int i=0;i<row;i++){
            int rowSum=0;
            for(int j=0;j<column;j++){

                rowSum=rowSum+arr[i][j];

            }
            
            printf("%d rowsum: %d\n",i+1,rowSum);
        }

            printf("column sum: \n");

            for(int j=0;j<column;j++){
                int colSum=0;
                for(int i=0;i<row;i++){

                        colSum=colSum+arr[i][j];
                   
                }
                 printf("%d colSum:%d\n",j+1,colSum);
            }

    return 0;
}