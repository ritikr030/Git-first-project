#include<stdio.h>
int main (){

    int n;
    printf("enter your number:");
    scanf("%d",&n);


        if(n%2!=0){

            for(int i=1;i<=n;i++){

                   if(i%2!=0 ){

                    for(int k=1;k<=n-i;k++){

                        if(k%2!=0){
                            printf(" ");
                        }
                    }
                       
                for (int j=1;j<=i;j++){

                    printf("*");
                 }
               }else{
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