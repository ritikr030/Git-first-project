#include<stdio.h>
#include<string.h>

int main ( ){

    char str[100000];
    printf("your original char :");
    scanf("%s",str);

    int size=strlen(str);


    printf("the character of strings are: \n");
    for(int i=0;i<size;i++){
        printf("%c ",str[i]);
    }


    return 0;

}