#include <stdio.h>
int main () {
  

   int a=1;

   int n;
   printf("enter your number: ");
   scanf("%d",&n);


    for (int i=1;i<=n;i++){
        
        for (int j=1;j<=n;j++){
            printf("%d ",a++);
            
        }

        printf("\n");
    }

    return 0;
}