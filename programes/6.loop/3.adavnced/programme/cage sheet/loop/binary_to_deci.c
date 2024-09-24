#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int rem,sum=0,p=1;

        while(n>0){
            rem=n%10;

            sum=sum+rem*p;
            
            p=p*2;

            n=n/10;


            
        }
printf("deci number=%d",sum);
    return 0;
}