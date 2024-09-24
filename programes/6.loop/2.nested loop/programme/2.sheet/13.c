#include<stdio.h>
int main (){

    int n;
    printf("enter your number:");
    scanf("%d",&n);

    int a=n;


        if(n%2!=0){

            for(int i=1;i<=n;i++){


                   if(i%2!=0 ){

                    for(int k=1;k<=i;k++){
                        printf(" ");
                    }

                  
                    for(int j=1;j<=n+1-i;j++){

                        printf("* ");
                        
                    }

        
              }else {
                 continue;
                 i++;
              }
                  printf("\n");
            }

        }else{
            printf("not applicable");
        }

    return 0;
}