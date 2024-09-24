//5.Write a program to take two number from user and print prime number present between them.

 #include <stdio.h>
 int main () {

  int a;
  printf("enter your number: ");
  scanf("%d",&a);

   int n;
  printf("enter your number: ");
  scanf("%d",&n);

  while(a<=n){
  int i;
  for (i=2;i<a;i++){
   
        if(a%i==0){
          printf("%d is not prime\n",a);
            break;
        }
        
     }
   
      if(i==a){
            printf("%d is prime\n",a);
        }


  a++; 
  }
    return 0;
 }
