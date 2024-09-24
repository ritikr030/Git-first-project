//9.	Write a C program to sort three integers in ascending order using if-else statements.

#include <stdio.h>
int main () {
      

      int a;
      printf("enter your number ");
      scanf("%d",&a);
      
      int b;
      printf("enter your number ");
      scanf("%d",&b);
      
      int c;
      printf("enter your number ");
      scanf("%d",&c);
     
      if (c>b && c>a ){
        printf("%d %d %d",a,b,c );
      } 
    
      else {
               if(b>c && b>a){
                 printf("%d %d %d",b,c,a);
               }
                  else{
                    printf("%d %d %d",c,b,a);
                  }
      }

    return 0;
}