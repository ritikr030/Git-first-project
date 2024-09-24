#include<stdio.h>
#include<string.h>
int main () {

    char str[100];
    printf("enter your string: ");
    scanf("%s",str);

    char del[100];
    printf("enter your del word: ");
    scanf("%s",del);
    
    int length=strlen(str);

    int d=strlen(del);

    //int dle=d;

   // printf("%d",dle);

    for(int i=d-1;i<=length;i++){
        printf("%c",str[i]);
    }

    return 0;
}