#include<stdio.h>
#include<string.h>
int main () {

    char str[1000];
    printf("enter your string: ");
    scanf("%s",str);

    int length=strlen(str);
    int count=1;

    for(int i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
            count=0;
        }
    }

     if (count){
        printf("Yes, it's a palindrome! \n");
    } else {
        printf("No, it's not a palindrome. \n");
    }


    return 0;
}