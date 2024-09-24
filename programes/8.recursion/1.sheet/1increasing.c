
#include<stdio.h>

void increasingNum(int n){
    if(n==0) {
        return ;
    }

    increasingNum(n-1);

    printf("%d\n",n);

    return ;

}

int main(){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    increasingNum(n);

    return 0;
}