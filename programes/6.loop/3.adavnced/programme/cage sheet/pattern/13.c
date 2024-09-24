#include<stdio.h>
int main() {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int a='A';

    for(int i=1;i<=n;i++){
        int b=a;
        for(int j=1;j<=n;j++){

            if(j==1||i==1){
                printf("%c ",b++);
            }
        }
        printf("\n");
        a++;
    }


    return 0;
}