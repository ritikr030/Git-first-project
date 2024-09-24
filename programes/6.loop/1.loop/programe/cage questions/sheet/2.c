//2. Write a program to take a number from user and print from 1 to till user’s input.
  
  #include <stdio.h>
  int main () {
     int i=1;

     int n;
     printf("enter your number: ");
     scanf("%d",&n);

     for(i;i<=n;i++){

        printf("%d\n",i);
     }
    return 0;
  }