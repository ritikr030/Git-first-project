#include<stdio.h>
int main () {

int n;
printf("enter  your number:");
scanf("%d",&n);

 int a=64;

  for(int i=1;i<=n;i++){
    int temp=i+a;

    for(int j=1;j<=n;j++){

        printf("%c",temp++);
    }
    printf("\n");
  }


    return 0;
}