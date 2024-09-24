#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int A='A';
    int a='a';
    int z=1;


    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            if(j==1){
                printf("%c ",A++);
            }

            if(j==n){
                printf("%c",a++);
            }

            if(j+1<n){
                printf("%d ",z++);
            }


        }
        printf("\n");

    }

    return 0;
}