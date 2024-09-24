//22.Write a program to take a number from user and check that number is palindrome or not .

#include<stdio.h>
int main (){
          
        int n;
        printf("enter your number: ");
        scanf("%d",&n);

        int a=n;

        int rev=0,rem=0;

        for (;n!=0;n=n/10){
            rem=n%10;
            rev=rev*10 + rem;


        }  if (rev==a){
            printf("paindromme");
        }else{
            printf("not");
        }

    return 0;
}