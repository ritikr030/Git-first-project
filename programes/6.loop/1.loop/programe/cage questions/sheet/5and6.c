//5.Write a program to print alphabets from a to z .
 
 #include <stdio.h>
 int main ( ) {

    char i='a';

    char n;
    printf("enter your number: ");
    scanf("%c",&n);

    for (i;i<=n;i++){
        printf("%c\n",i);
    }



    return 0;
 }