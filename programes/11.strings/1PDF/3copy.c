#include<stdio.h>
#include<string.h>
int main (){

    char str[10];
    printf("enter your char: ");
    scanf("%s",str);

    char str2[10];
    printf("enter your 2nd char: ");
    scanf("%s",str2);

    strcpy(str,str2);

    printf("your copy is: %s",str);



    return 0;
}