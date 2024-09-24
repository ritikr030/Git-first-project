/*
6.Write a program to take two number from user and print fibonacci numbers between the given range
*/

#include<stdio.h>
int main () {

     int a;
      printf("enter your number: ");
      scanf("%d",&a);


    int n;
    printf("enter your number: ");
    scanf("%d",&n);

       int i=0;
        int j=1;
        int sum=0;

        for (;sum<=n;sum++){

        
            i=j;
            j=sum;
            sum=i+j; 
            if(sum>=a){
                printf("%d is fib\n",sum);
            }

        }
    
    return 0;
}