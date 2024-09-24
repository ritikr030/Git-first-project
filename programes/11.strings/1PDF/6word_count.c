#include<stdio.h>
int main () {

    char str[10000];
    printf("enter your string: ");
    scanf("%s",str);

    int n;
    printf("enter your size: ");
    scanf("%d",&n);
    getchar( );

    int count=0;

    char str[n];

    fgets(str,n,stdin);

    // for(int i=0;i<n;i++){
    //     scanf("%c",&str[i]);
    // }
    
    for(int i=0;i<n;i++){
       if(str[i]==' '){
        count++;
       }
    }

    printf("the total number of words in a string = %d",count);
    
    
    return 0;
}