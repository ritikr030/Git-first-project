/*
10.Write a program to keep taking input from user if the user is gives negative number
or zero the program ends else check the given input is prime or not and is fibonacci or
not.
Ex: input :num=5 output : 5 is prime and fibonacci.
num= 11 11 is prime but not fibonacci.
num= 8 8 is not prime but fibonacci
num= 6 6 is not prime and not fibonacci.
num= - 4 found negative number pls stop the Loop
*/

#include<stdio.h>
int main () {

    int n;

   
 int i=0,j=1,sum=0;
    

    while(n>0){
    printf ("enter your number: ");
    scanf("%d",&n);



        while(i<=n){

          //  printf("%d",sum);

                i=j;
                j=sum;
                sum=i+j;

            if(sum==n){
            printf("%d is fib\n",n);
            break;
        }else {
            printf("%d is not fib\n",n);
            break;
        }
        }
i++;

        for(int j=2;j<=n;j++){

                if(n%j==0){
                    printf(" not prime\n");
                    break;
                }

        }

      
    }
      if(j==n){
            printf("%d is prime \n",j);
        }





    return 0;
}