
#include<stdio.h>
int main (){
   
                                    //first matrix
    int r;
    printf("enter your row: ");
    scanf("%d",&r);

    int c;
    printf("enter your column: ");
    scanf("%d",&c);
 

        int matrix1[r][c];
        int matrix2[r][c];

        int summatrix[r][c];

        printf("enter the first matrix: \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                scanf("%d",&matrix1[i][j]);

            }
        }

          printf("enter the second matrix: \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                scanf("%d",&matrix2[i][j]);

            }
        }

       // printf("enter the second matrix: \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                summatrix[i][j]=matrix1[i][j]+ matrix2[i][j];

            }
        }

        printf("sum of two matrix: \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                printf("%d ",summatrix[i][j]);

            }
            printf("\n");
        }




    return 0;
}