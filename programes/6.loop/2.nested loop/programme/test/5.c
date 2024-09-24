#include<stdio.h>
int main (){
   
    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int last=n;

    for (int i=1;i<=n;i++){
          
        if(i==1){
            
            for (int j=1;j<=n;j++){
                int a=j+64;
                printf("%c",a++);

            }

        }

        else if(i<=n-1){
            for(int k=1;k<=n;k++){
                printf("%d",k);
            }
        }

        else if(i==last){
            for(int l=1;l<=n;l++){
                int b=l+96;
                printf("%c",b++);
            }
        }
printf("\n");

    }


    return  0;
}