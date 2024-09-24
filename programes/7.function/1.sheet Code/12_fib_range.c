
#include<stdio.h>

void fib(int a,int n){


    int i=0;
    int j=1;

    int sum=0;

    for(i;i<n;i++){

   
        i=j;
        j=sum;
        sum=i+j;
        if(sum>=a)
            printf("%d\n",sum);
        
    }

    return ;
}

int main (){

    int a;
    printf("enter your first number: ");
    scanf("%d",&a);

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

        fib(a,n);

        return 0;

}