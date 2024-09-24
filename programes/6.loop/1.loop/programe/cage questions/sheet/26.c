//26.Write a program to take a number from user and check that number is armstrong or not

#include<stdio.h>
int main () {

  int n;
  printf("enter your number: ");
  scanf("%d",&n);

  int count=0,rem=0,sum=0,mul=1;

  int a=n;


     int b=n;
     while (b!=0){
     b=b/10;
     count++;
       }

   while(n!=0){

    rem=n%10;
    n=n/10;

    for(int i=1;i<=count;i++){
      mul=mul*rem;
    }

    sum= sum + mul;
  }

     if(sum==a){
      printf("%d is armstrong",sum);
    }else{
      printf("%d noy arm",a);
    }
 
 
    return 0;
}
