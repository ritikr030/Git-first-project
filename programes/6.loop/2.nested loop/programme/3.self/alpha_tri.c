#include<stdio.h>
int main () {

  int n;
  printf("enter your number: " );
  scanf("%d",&n);   


    for(int i=1;i<=n;i++){
  
    char a='a';
        for(int j=1;j<=i;j++){
            printf("%c ",a++);
        }
        printf("\n");
    }



    return 0;
}