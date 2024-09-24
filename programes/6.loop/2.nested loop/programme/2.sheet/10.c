/*
10.  *
     * *
     * * *
     * *
     * 

*/


#include<stdio.h>
int main (){

   int i=1;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

     for (  i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            printf(" *");
        }
        printf("\n"); 

   }    
         for(int k=1;k<=n;k++){

           for(int j=1;j<=n-k;j++){

                printf(" *");

           }

           printf("\n");

        }


   

    return 0;
}
