
#include<stdio.h>
int main () {

    int i=1;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(;i<=n;i++){
        if (i%2==0){
            for(int j=1;j<=n;j++){
                if (j%2==0){
                    printf("*");
                }else
                {
                    printf("#");
                }
            }

        }

        if(i%2!=0){
            for(int k=1;k<=n;k++){
                       if (k%2==0){
                    printf("#");
                }else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }

    return 0;
}