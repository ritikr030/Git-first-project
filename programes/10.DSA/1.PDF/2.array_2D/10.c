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

    printf("these are arrays elements: \n");

    //  for(int i=0;i<r;i++){

    //     for(int j=0;j<c;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

     for(int i=0;i<r;i++){
         int sum=0;
        for(int j=0;j<c;j++){
            
        sum=sum+arr[i][j];
              printf("%d",arr[i][j]);
           
                    

            printf("sum=%d",sum);
        }
        printf("\n");
    }

    

    return 0;
}