/*
write a prgramme to take a number from user print that digit which are prime and check given number are pallindrome or not


*/

#include<stdio.h>
int main () {

    int rem,i,rev;


    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int a=n;

        while(n>0){

            rem=n%10;
            
            for(i=2;i<=rem;i++){

                if(rem%i==0){
                  //  printf("not prime\n");
                    break;
                }

            }
                 if(i==rem){
                    printf("%d is prime\n",rem);
                }


            rev=rev*10+rem;
            n=n/10;
        }

            if (a==rev){
                printf("%d is pallindrome",a);
            }else{
                printf("%d is not pallindrome",a);
            }

           

    return 0;
}