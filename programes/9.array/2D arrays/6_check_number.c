
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

    
    int found =0;
    int n;
    printf("enter your number: ");
    scanf("%d",&n);



        for(int i=0;i<row;i++){

        for(int j=0;j<column;j++){

         if(arr[i][j]==n){
            found = 1;
        }

        printf("\n");
        }

        }
    if (found==1)
    {
            printf("%d found",n);
    }
    else
    {
            printf("%d not found",n);
    }
    
    

    return 0;
}