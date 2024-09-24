//12.	Write a C program to check whether a number is divisible by 5 and 11 or not 

#include <stdio.h>
int main () {

    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    
    if(a%5==0 && a%11==0){
      printf("divisible by 5 and 11");
    } 
    else
      { printf("not divisible by 5 and 11");

    }

    return 0;
}