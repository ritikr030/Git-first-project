//4.Write a C program to check positive, negative or zero

#include <stdio.h>
int main  () {

     int a;
     printf("enter your number: ");
     scanf("%d",&a);

     if (a>0){
        printf("%d is positive",a);
     }
       else{

             if (a<0){
                printf("%d is negative",a);
             }
               else {
                printf("%d is zero",a);
               }
       }

    return 0;
}