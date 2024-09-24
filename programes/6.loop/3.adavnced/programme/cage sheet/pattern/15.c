#include<stdio.h>
int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int c=1;

   char a='a';
   char b='A';
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){

             if(c%2!=0){ 
                
                 printf("%c",a);
             }
            
             if(c%2==0){
                
                printf("%c",b);
             }
                a++;
                b++;
                c++;
        }
        printf("\n");
    }


    return 0;
}