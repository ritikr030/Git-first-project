#include <stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);
        int a = n ;


    int sum = 0 ;
     
    int t = n ;
    while(t!=0){
        n=n%10;
         t=t/10;
        int fact=1;
        for(int i = 1 ;i<=n;i++){
          fact=fact*i; 
        }
          printf("%d\n",fact);
          sum=sum+fact;
            n=t;    
    } 
      if (sum==a){
        printf("strong number");
      }else {
            printf("only number");
      }

    return 0;
}