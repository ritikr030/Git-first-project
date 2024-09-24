// 17.Write a program to take a number from user and print the table of that number .

#include <stdio.h>
int main () {

    int i=1;

    int n; 
    printf("enter your number: ");
    scanf("%d",&n);

      for (i;i<=10;i++){
        int table=n*i;

        printf("%dX%d=%d\n",n,i,table);
      }

    return 0;
}