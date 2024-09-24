#include<stdio.h>
int main () {

    int n;
    printf("enter your size: ");
    scanf("%d",&n);

    int count=0;

    char str[n];

    for(int i=0;i<n;i++){
        scanf("%c",&str[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(str[i]==str[j]){
               
               printf("the repeted character : %c",str[j]);
            }
        }
    }

        
    
    
    return 0;
}