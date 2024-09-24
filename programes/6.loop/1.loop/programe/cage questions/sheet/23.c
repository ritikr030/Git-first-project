#include<stdio.h>
int main () {
    
    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int i=0;

    int j=1;

    int sum=0;

    for(i;i<n;i++){
       
         printf("%d\n",sum);   

        i=j;
        j=sum;
        sum=i+j;

    }

    return 0;
}