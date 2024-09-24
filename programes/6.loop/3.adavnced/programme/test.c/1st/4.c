
#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int A='A';
    int a='a';

     for (int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            printf(" ");

        }

        for(int k=1;k<=n-i;k++){

            if(i%2!=0){
                printf("%C",A++);
            }

            if(i%2==0){
                printf("%c",a++);
            }

            printf(" ");


        }
        printf("\n");

     }


    return 0;
}