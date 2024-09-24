#include<stdio.h>



int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

     char a='A'; 

       

    for(int i=1;i<=n;i++){
      int b=1;
        for(int j=1;j<=n-i+1;j++){
  
          if(i+1<=n-1){
            printf("%d",b);
          }else{
            printf("%c",a); 
          }

           
          b++;
          a++;
        }
        
        
        printf("\n");
    }

    return 0;
}