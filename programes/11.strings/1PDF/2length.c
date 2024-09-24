#include<stdio.h>
#include<string.h>

int main () {

    char str[5];

    printf("enter your char: ");
    fgets(str,10,stdin);

    int size=strlen(str);

  //  puts(size);

  printf("%d",size);



    return 0;
}