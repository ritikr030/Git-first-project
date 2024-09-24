#include<stdio.h>
#include<string.h>
int main (){

    char str[1000];
    printf("enter your string: ");
    scanf("%s",str);

    int s=strlen(str);

    int n;
    printf("enter your starting index: ");
    scanf("%d",&n);

    int n2;
    printf("enter your end index: ");
    scanf("%d",&n2);

    for(int i=n-1;i<n2;i++){
        printf("%c ",str[i]);
    }

    return 0;
}