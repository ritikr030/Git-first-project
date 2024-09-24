#include<stdio.h>
int main () {

    int r;
    printf("enter your row size:");
    scanf("%d",&r);

    int c;
    printf("enter your column size:");
    scanf("%d",&c);

    int arr[r][c];

    int count=0;

    printf("enter your elements\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
       
    }

    printf("these are arrays elements: \n");

    int a;
    printf("enter your number: ");
    scanf("%d",&a);

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

             if(arr[i][j]/a){
                count++;
             }   

        }
        printf("\n");
    }
    
        printf("count=%d",count);

    return 0;
}