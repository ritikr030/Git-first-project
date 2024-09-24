
#include<stdio.h>
int main ( ) {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int  a=1;
    int c=65;
    char b='A';


    for(int i=1;i<=n;i++){

       if(i%2!=0){

         for(int j=1;j<=n;j++){

           if(j%2!=0){
                   printf("%d",a);

             }else {
                    printf(" ");
            }

                 a++;
            }
            }
        if(i%2==0){
            for(int j=1;j<=n;j++){
                if(j%2==0){
                    printf("%c",b);
                }else{
                    printf(" ");
                }

                b++;
            }
        } 



        printf("\n");

    }

    return 0;
}