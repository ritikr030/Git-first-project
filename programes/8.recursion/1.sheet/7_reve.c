#include<stdio.h>

 int reverse(int r,int n,int rev){
    
    if(n==0){
        return 1;
    }
    int rem=n%10;
    int num=n/10;
    int ans=rev*10+rem;
     
     return reverse(rem,num,ans);

}

int main () {

    int n=145;
    // printf("enter your number: ");
    // scanf("%d",&n);

        int re=rev(0,n,0);

        printf("%d",re);


    return 0;

}