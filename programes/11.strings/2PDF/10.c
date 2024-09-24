#include<stdio.h>
#include<string.h>
int main (){

    char str[1000];
    printf("enter your string: ");
    scanf("%s",str);

    int s=strlen(str);

  
    for(int i=0;i<s;i++){
       
        for(int j=i+1;j<s;j++){
            int count=0;
            if(str[i]==str[j]){
                count++;
                printf("%c:",str[i]);
                printf("%d\n",count);
            }
        }
        printf("%c",str[i]);
    }

    return 0;
}