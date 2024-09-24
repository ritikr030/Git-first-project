#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int a=j+64;

            printf("%d",a++);
        }
    }

    return 0;
}