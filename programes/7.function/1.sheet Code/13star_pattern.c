#include<stdio.h>

void pattern(int n){

    for(int i=1;i<=n;i++){

            for(int j=1;j<=n;j++){

                printf("*");
            }
        printf("\n");
    }

}

int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    pattern(n);

    return 0;
}