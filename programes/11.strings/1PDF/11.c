#include<stdio.h>
#include<string.h>
int main () {

    char str[100];
    printf("enter your first string: ");
    fgets(str,100,stdin);

    char str2[100];
    printf("enter your second string: ");
    fgets(str2,100,stdin);
    str[strcspn(str,"\n")]='\0';
    strcat(str,str2);

    printf("concated: %s",str);



    return 0;
}
