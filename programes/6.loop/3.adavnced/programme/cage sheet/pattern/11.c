#include<stdio.h>
int main () {

int n;
printf("enter your number: ");
scanf("%d",&n);

 int a=1;
for(int i=1;i<=n;i++){
 
    for(int j=1;j<=n-i+1;j++){

        printf(" ");
    }
    for(int j=1;j<=a;j++){

        if(j==1 || j==a || i==n/2+1){
        printf("*");
        
        }else{
            printf(" ");
        }
    }
a=a+2;
    printf("\n");


}


}