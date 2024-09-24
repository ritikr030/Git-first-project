#include<stdio.h>
int main () {

int n;
printf("enter your number: ");
scanf("%d",&n);

int a=n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            printf(" ");
        }

        for(int k=1;k<=a;k++){
            if(i==1||k==1||k==a){
                printf("*");
            }else{
                printf(" ");
            }
        }

        a=a-2;

        printf("\n");
    }

    return 0;
}