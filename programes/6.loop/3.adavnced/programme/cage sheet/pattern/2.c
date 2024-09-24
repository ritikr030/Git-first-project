#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            if(i==1 || j==i|| i==n || j==1){
                printf("*");
            }else{

                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}