
#include<stdio.h>
int main (){

    int r;
    printf("enter your rows: ");
    scanf("%d",&r);

    int c;
    printf("enter your column: ");
    scanf("%d",&c);

    int arr[r][c];

    int brr[c][r];

        printf("enter your elements: \n");

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                scanf("%d",&arr[i][j]);

            }
        }

        printf("array elements: \n");

          for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                printf("%d ",arr[i][j]);

            }
            printf("\n");
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                brr[j][i]=arr[i][j];

            }
            printf("\n");
        }

        printf("transpose elements: \n");

         for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){

            printf("%d ",brr[i][j]);

            }
            printf("\n");
        }

    return 0;
}