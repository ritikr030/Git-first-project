

#include <stdio.h>
int main () {

    int n=9;
    int i=-1;

    for(;n>=i;i++){
        int j=i;
        if(i<n){
            continue;j=j+5;

        }

        printf("%d.coding age\n",j);
        if (i>n){
            break;
            i=i+12.89;

        }
    }
    printf("%d",i);
    return 0;
} 