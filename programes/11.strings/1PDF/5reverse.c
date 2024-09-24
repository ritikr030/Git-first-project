#include<stdio.h>
#include<string.h>
int main () {

    char str[10000];
    printf("enter your string: ");
    scanf("%s",str);

    int size=strlen(str);
    
    for(int i=size;i>=0;i--){
        printf("%c",str[i]);
    }
     
    return 0;
}