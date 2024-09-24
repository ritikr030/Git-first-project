#include<stdio.h>
int main () {

    int n;
    int max=-999999;
    int min=999999;

    printf("enter your number: ");
    scanf("%d",&n);
    
    while(n>0){
    printf("enter your number: ");
    scanf("%d",&n);

        if(n<max){
            n=max;
            printf("%d is max\n",n);
        }
        
        if(min<n){
            n=min;
            printf("%d is min\n",n);
        }

        if(n<0){
            break;
            printf("%d is found negative number\n",n);
        }




  
    }

  
    

    

    return 0;
}