
#include<stdio.h>

void pali(int n){

     int a=n;
    int rem=0;
    int rev=0;

    while(n!=0){

        rem=n%10;
        rev=rev*10+rem;

        n=n/10;
        

    }

        if(rev==a){
            printf(" is pallindome\n");
        }else{
            printf(" is not pallindrome\n");
        }

    return ;
 
}

void reverse(int n){

    
    int rem=0;
    int rev=0;

    while(n!=0 ){

        rem=n%10;
        rev=rev*10+rem;

        n=n/10;
    

    }

    printf("%d",rev);

    return ;
}



int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    reverse(n);
    pali(n);

    return 0;
}