/*
2. * # * # *
   * # * # *
   * # * # *

*/

#include<stdio.h.>

int main () {

    int i=1;

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    for (;i<=n;i++){

        for( int j=1;j<=n;j++){

            if (j%2==0){
                printf("# ");
            }else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;

}