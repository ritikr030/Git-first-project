#include<stdio.h>
int main() {

    int n; int a=1;
    printf("enter your number: " );
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){

            printf(" ");
        }

        for(int k=1;k<=a;k++){
           if(i==n||k==1 ||k==a){
             printf("*");
           }else{
            printf(" ");
           }
        }
        a=a+2;
        printf("\n");
    }



    return 0;
}