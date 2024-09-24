//6. Write a C program to check whether triangle is valid or not if angles are given.
#include <stdio.h>
int main () {

     int a;
     printf("enter your 1st angle ");
     scanf("%d",&a);

     int b;
     printf("enter your 2nd angle ");
     scanf("%d",&b);
     
     int c;
     printf("enter your 3rd angle ");
     scanf("%d",&c);

     

     if (a+b+c==180){
        printf("its a triangle");
         
     } else{
        printf("not a triangle");
     }

    return 0;
} 