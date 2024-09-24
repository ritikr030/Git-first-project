#include<stdio.h>
int main () {

    long n;
    printf("enter your number: ");
    scanf("%li",&n);

    long rem;
    long long int  sum=0,p=1;

        while(n>0){
            rem=n%2;

            sum=sum+rem*p;

            p=p*10;

            n=n/2;
    
    //printf("%li\n",sum);
            
        }
printf("binary=%lli",sum);
    return 0;
}