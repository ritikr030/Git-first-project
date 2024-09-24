//11.Write a program to take two number from user and .Find odd number between them.


#include <stdio.h>
int main () {
    
    int i;
    printf("enter your 1st number: ");
    scanf("%d",&i);

    int n;
    printf("enter your 2nd number: ");
    scanf("%d",&n);

    for (;i<=n;i++){

        if (i%2!=0){
            
            printf("%d\n",i);
        }
    }
   
 return 0;
}