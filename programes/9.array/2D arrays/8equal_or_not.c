#include<stdio.h>
int main () {

    int r1;
    printf("enter your row: ");
    scanf("%d",&r1);

    int c1;
    printf("enter your column: ");
    scanf("%d",&c1);


    int arr[r1][c1];

    printf("enter your elememts:\n");

    for(int i=0;i<r1;i++){

        for(int j=0;j<c1;j++){

            scanf("%d",&arr[i][j] );

        }
    }   

    printf("array elments:\n");

    for(int i=0;i<r1;i++){

        for(int j=0;j<c1;j++){

            printf("%d ",arr[i][j] );

        }

        printf("\n");
    }


    
      int r2;
    printf("enter your 2nd row: ");
    scanf("%d",&r2);

    int c2;
    printf("enter your 2nd column: ");
    scanf("%d",&c2);


    int arr2[r2][c2];

    printf("enter your 2nd array elememts:\n");

    for(int i=0;i<r2;i++){

        for(int j=0;j<c2;j++){

            scanf("%d",&arr2[i][j] );

        }
    }   

    printf("2nd array elments:\n");

    for(int i=0;i<r2;i++){

        for(int j=0;j<c2;j++){

            printf("%d ",arr2[i][j] );

        }

        printf("\n");
    }

       int count=0;


    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){

            if(arr[i][j]==arr2[i][j]){
                count++;
            }
        }
    }
    if(count==c1*r1)
    {
            printf("equal matrices");
    }
    else
    {
        printf("not equal matrices");
    }


    return 0;
}