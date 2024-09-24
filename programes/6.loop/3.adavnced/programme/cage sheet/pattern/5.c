#include<stdio.h>
int main() {

     int n;
     printf("enter your number: ");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            printf(" ");
        }

        int z=n-i+1;

        for(int k=1;k<=z;k++){
            if(i==1||k==1||k==z){
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");
     }

    return 0;
}

