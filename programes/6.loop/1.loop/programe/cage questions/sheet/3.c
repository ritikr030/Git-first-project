//3. Write a program to take a number from user and print from user input to 1.
 
  
  #include <stdio.h>
  int main () {
     int i=1;

     int n;
     printf("enter your number: ");
     scanf("%d",&n);

     for(n;n>=i;n--){

        printf("%d\n",n);
     }
    return 0;
  }