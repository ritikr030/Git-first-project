/*
3.Write a program to take a number from user and find maximum and minimum digit of that
number.

*/

#include<stdio.h>
int main (){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int max=0;
    int min=9;
    int rem;


    while(n!=0){

        rem=n%10;

        if(max<rem){
            max=rem; 
        }

        if (min>rem){
            min=rem;
        }

        n=n/10;
        
        
    }

    printf("max=%d\n",max);
    printf("min=%d",min);


    return 0;
}