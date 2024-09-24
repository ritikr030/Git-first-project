#include<stdio.h>
    void num(int a,int n){
        if(n<a) return;
        printf("%d\n",a);
        num(a+1,n);
        return ;
    }

    int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);

    num(1,n);


    return 0;
}