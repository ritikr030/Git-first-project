
#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);


    for (int i=1;i<=n;i++){
    
        for(int k=i;k<=n;k++){
            printf("*");
        }

        for(int j=i;j>=1;j--){
            
    char a='A';
            printf("%c",a++);
 
        }

        for(int l=2;l<=i;l++){

            char b='B';
            printf("%c",b);
        }
    
        printf("\n");
    }

    return 0;
}