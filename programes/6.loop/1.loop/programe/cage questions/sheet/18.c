//18.Write a program to take a number from user and count the digit present in that number .

#include<stdio.h>
int main () {

        int i=1;

      int n;
      printf("enter your number: ");
      scanf("%d",&n);

      int count=0;


      for(;i<=n;n=n/10){

       count++;

      }

      printf("%d",count);
    return 0;
}