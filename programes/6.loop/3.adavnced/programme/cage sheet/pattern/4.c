#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            printf(" ");

        }

        for(int j=1;j<=i;j++){

            if(j==1||j==i||i==n){
                printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}