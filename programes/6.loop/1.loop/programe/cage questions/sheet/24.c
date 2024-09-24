//24.Write a program to take two number from user and find greatest common factor of them

#include<stdio.h>
int main () {
  
   int i;
   printf("enter your number: ");
   scanf("%d",&i);

   int n;
   printf("enter your 2nd number: ");
   scanf("%d",&n);

   int rem=0,remainder=0;

   for (;n!=0;i++){

        rem=i%n;
        remainder=n%rem;

    printf("%d\n",remainder)//

   }
   
    
   

    return 0;
}