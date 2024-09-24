#include<stdio.h>

    int sum(int n){
        if( n==1){
            return 1 ;
        }
        int add=n+sum(n-1);
        return add;
        
    }

int main (){

    int n;
    printf("enter your number:");
    scanf("%d",&n);

   int summation=sum(n);

    printf("%d",summation);

return 0;

}