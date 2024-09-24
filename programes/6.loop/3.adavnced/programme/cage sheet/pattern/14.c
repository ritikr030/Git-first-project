#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int a=1;

    for(int i=1;i<=n;i++){
        int b=a;
        for(int j=1;j<=n;j++){
            if(i==1||j==1){
                printf("%d",b++);
            }
        }
       a++;
        printf("\n");
         
    }

    return 0;
}