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

    int j=2;
        while(j<=n){

                i=j;
                j=sum;
                sum=i+j;

                //if(sum==n)

                if(n%j==0){
                    printf("not prime");
                }

        }

        if(j==n){
            printf("%d is prime \n",j);
        }

j++;

    }
    

    return 0;
}