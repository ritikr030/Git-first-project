#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
int a='a';
        for(int j=1;j<=n;j++){
            
            if(i==j || i+j==n+1){
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