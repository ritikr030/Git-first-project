/*

__1
_212
32123


*/

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
            
            printf("%d",j);
 
        }

        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
    
        printf("\n");
    }

    return 0;
}