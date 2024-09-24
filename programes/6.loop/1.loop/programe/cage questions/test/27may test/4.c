#include<stdio.h>
int main () {

    int num;
    printf("enter your number: ");
    scanf("%d",&num);

    int n=num;

    int rem=0,rev=0;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if (rev==n){
        printf("palindrome");

     }else {
        printf("not pallindrome");
     }
    return 0;
}