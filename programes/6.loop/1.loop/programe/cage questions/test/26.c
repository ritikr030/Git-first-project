
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
    printf("s=%d",sum);
    
  
  }

     if(sum==a){
      printf("%d is armstrong",sum);
    }else{
      printf("noy arm");
    }
 
 
    return 0;
}
