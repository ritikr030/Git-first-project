#include<stdio.h>
int main () {

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int found=0;

    char str[n];

    char str2[n];

    printf("enter your 1st string:\n");
    for(int i=0;i<n;i++){
        scanf("%c",&str[i]);
    }

    printf("enter your 2nd string:\n");
    for(int i=0;i<n;i++){
        scanf("%c",&str2[i]);
    }

    for(int i=0;i<n;i++){
        if(str[i]==str2[i]){
           found++;
        }
    }

    if(found>0){
        printf("strrings are equal");
    }else{
         printf("strrings are not equal");
    }


    return 0;
}