#include<stdio.h>
int main ( ){

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
       
            for(int j=1;j<=i;j++){

                if (j%2!=0){
                printf("%d",j++);
                

                }else if( j%2==0 ){
                    printf("%c",j+64);

                }
            }
            printf("\n");
        
    }

    return 0;
}