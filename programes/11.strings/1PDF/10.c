#include<stdio.h>
int main () {

    // int n;
    // printf("enter your size: ");
    // scanf("%d",&n);
    // getchar( );

    int count=0;

    char str[1000];

    fgets(str,1000,stdin);

    // for(int i=0;i<n;i++){
    //     scanf("%c",&str[i]);
    // }
    
    for(int i=0;i<n;i++){
       if(str[i]=='a'<='z'){
        count++;
       }
    }

    printf("the total number of words in a string = %d",count);
    
    
    return 0;
}