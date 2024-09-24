#include<stdio.h>
#include<string.h>
int main (){

    char str[1000];
    printf("enter your string: ");
    scanf("%s",str);

    int s=strlen(str);

    int n;
    printf("which index you want?: ");
    scanf("%d",&n);

   printf("%c",str[n]); 

    return 0;
}