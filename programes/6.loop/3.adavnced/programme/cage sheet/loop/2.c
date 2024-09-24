/*

2.Write a program to take ten number from user and find Average , Maximum and Minimum number .

*/

#include<stdio.h>
int main () {

    int n,sum=0,avg=1;

    int max=-9999999; 
    int min=9999999;


    printf("enter your ten numbers\n");

    for (int i=1;i<=10;i++){
        printf("enter your number %d: ",i);
        scanf("%d",&n);

        sum=sum+n;
        
        if (n>max){
            max=n;
        }
        
        if(n<min){
            min=n;
        }

    }
    avg=sum/10;
    printf("avg=%d\n",avg);
    printf("sum=%d\n",sum);
    printf("max=%d\n",max);
    printf("min=%d\n",min);

    return 0;
}

