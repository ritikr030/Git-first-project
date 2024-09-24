#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    

    for(char i='';i<=n;i++){

        for(int j=1;j<=n-i;j++){
            printf("#");
        }

        for(int k=i;k>='A';k--){
            printf("%d",k);
        }

        for(int l=2;l<=i;l++){
            printf("%d",l);
        }

        printf("\n");

    }


    return 0;
} 