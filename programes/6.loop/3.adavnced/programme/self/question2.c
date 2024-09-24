#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    

    for (int i=0;i<=n;i++){
  char a='a';
        for (int j=0;j<n;j++){

            if(i==j || j==n-i-1 ){
                
                printf("%c",a++);
            }else{
                a++;
                printf(" ");

            }
        }
        printf("\n");
    }

    return 0;
}