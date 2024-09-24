#include<stdio.h>
#include<string.h>
int main (){

    char str[1000];
    printf("enter your string: ");
    scanf("%s",str);

    int s=strlen(str);

  
    for(int i=0;i<s;i++){
        if(str[i]==' '){
           str[i++];
        }
        printf("%c",str[i]);
    }

    return 0;
}