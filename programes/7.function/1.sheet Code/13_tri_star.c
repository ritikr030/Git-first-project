#include<stdio.h>

void pattern(int n){
    int a=1;
    for(int i=1;i<=n;i++){

            for(int j=1;j<=n-i;j++){

                printf("  ");
            }

            for(int k=1;k<=a;k++){
                printf(" *");
            }

        printf("\n");
        a=a+2;
    }

    
}

int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    pattern(n);

    return 0;
}