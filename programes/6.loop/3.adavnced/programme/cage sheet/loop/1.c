/*
1. Write a program to take two number from user and print “ Coding “ on Even number and “ Age “ on Odd number.

*/

#include<stdio.h>
int main (){

  int i;
  printf ("enter your number: ");
  scanf("%d",&i);
 
 int n;
 printf ("enter your number: ");
 scanf("%d",&n);

 for (i;i<=n;i++){

    if (i%2==0){
        printf("%d.",i);
        printf("coding\n");
        
    }else{
        printf("%d.",i);
        printf("age\n");
    }
    
    
 }



 return 0;
}