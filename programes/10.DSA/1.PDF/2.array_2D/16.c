#include<stdio.h>
int main  (){

    int r;
    printf("enter your row: ");
    scanf("%d",&r);

    int c;
    printf("enter your column: ");
    scanf("%d",&c);

    int arr[r][c];

    printf("enter your elements: \n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            scanf("%d",&arr[i][j]);

        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                for(int l=0;l<c;l++){

                    if(arr[i][j]>arr[k][l]){
                        int temp=arr[i][j];
                        arr[i][j]=arr[k][l];
                        arr[k][l]=temp;
                    }

                }
            }

        }
        printf("\n");
    }

    printf("array in decending order: \n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }     

     int a=0;

    int arr2[r*c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            arr2[a++]=arr[i][j];
        
        }
    }

    // printf("1d: ");
    // for(int i=0;i<r*c;i++ ){
    //     printf("%d ",arr2[i]);
    // }


    int k;
    printf("which min you want: ");
    scanf("%d",&k);

    printf("%d min element is %d",k,arr2[r*c-k]);
    

    return 0;

}