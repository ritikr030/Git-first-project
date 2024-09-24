#include<stdio.h>
#include<string.h>

int main () {

    int vocount=0;
    int cocount=0;

    char str[1000];
    printf("enter your char: ");
    fgets(str,1000,stdin);


    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ){
            vocount++;
        }else{
            cocount++;
        }
    }

    printf("vowel=%d\n",vocount);
    printf("cosonent=%d",cocount);

    return 0;
}