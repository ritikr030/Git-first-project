//14.Write a program to take two number from user and .Find the sum of all odd number Present between them.

#include <stdio.h>
int main () {

    int i;
    printf("enter your number");
    scanf("%d",&i);

    int n;
    printf("enter your 2nd number:");
    scanf("%d",&n);

    int oddsum=0;


    for (i;i<=n;i++){
        if(i%2!=0){
            oddsum=oddsum+i;
        }
       
    }
  printf("%d",oddsum);
    return 0;
}