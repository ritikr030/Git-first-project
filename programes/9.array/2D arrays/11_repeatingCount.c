
#include<stdio.h>
int main () {

    int row;
    printf("enter your row: ");
    scanf("%d",&row);

    int column;
    printf("enter your column: ");
    scanf("%d",&column);

    int arr[row][column];

    int arr2[row][column];

    int  count=1;

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

    
    for(int i=0;i<row;i++){

        for(int j=i+1;j<column;j++){

         
            if(arr[i][j]==arr2[i][j]){
                count++;
                
                // printf("repeting number=%d\n",arr[i][j]);
                 printf("count=%d",count);
                
            }
        }

        printf("\n");
    }


        

    return 0;
}