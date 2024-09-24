#include<stdio.h>
#include<string.h>

int main (){

    char str[20];
    printf("enter your char: ");
   // scanf("%s",str);

    fgets(str,20,stdin); // for user input

    printf("your ans: %s",str);
    
   // puts(str);              //for printfouput


    return 0;
}