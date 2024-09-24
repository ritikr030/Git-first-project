
#include<stdio.h>

void  table(int n){
int i;
    for(i=1;i<=10;i++){

      int  table=n*i;

        printf("%dX%d=%d\n",n,i,table);
    }

    return ;
        
}

int main ( ){

    int n;
    printf("which numbers table you want ? : ");
    scanf("%d",&n);

        table(n);

    return 0;
}