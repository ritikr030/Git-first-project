
#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int a=1;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

                if(i==1 ){
                    printf("%d",a++);
        }

        for(int k=1;k<=n;k++){
                if(j==n){
                    printf("%d",a++);
                }
        printf("\n");
    }
}
    return 0;


}