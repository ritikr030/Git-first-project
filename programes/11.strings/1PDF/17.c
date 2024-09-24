#include<stdio.h>
#include<string.h>
int main () {

    char str[100];
    printf("enter your string: ");
    scanf("%s",str);

    char str2[100];
    printf("enter your del word: ");
    scanf("%s",str2);

    char str3[100];
    printf("enter your del word: ");
    scanf("%s",str3);
    
    for(int i=0;i<=10;i++){
        if(str[i]==str2[i] && str[i]==str3[i]){
            printf("%s ",str[i]);
        }
    }


    return 0;
}