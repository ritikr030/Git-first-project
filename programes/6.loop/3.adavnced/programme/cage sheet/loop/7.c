/*
7.Write a program to take two number from user and print palindrome numbers between the given range

*/

#include<stdio.h>
int main () {

    
    int rem=0,rev=0;
    
        int b;
        printf("enter your number: ");
        scanf("%d",&b);

        int n;
        printf("enter your number: ");
        scanf("%d",&n);

         

        while(b<=n){

            int c=b;
       
          while(c!=0){
               
                rem=c%10;
                rev=rev*10+rem;

                c=c/10;
                
//printf("%d",rev);
            } 
              if(rev==c){
                printf("%d is palli\n",c);
            }else { 
              //  printf("not");
            }
             

         b++;
        }
       


    return 0;
}