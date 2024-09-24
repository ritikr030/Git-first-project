//20.Write a program to take a number from user and check that number is prime or not .

#include <stdio.h>
int main (){

int i=2;

int n;
printf("enter your number: ");
scanf("%d",&n);

   for(i;i<n;i++){
    if (n%i==0){
          printf("not prime");
         // i++;
          break;
    }
  
   }
   if (i==n){
        printf("prime");
    }
    return 0;
}