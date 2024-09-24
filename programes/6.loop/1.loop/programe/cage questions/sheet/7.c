//7.Write a program to take alphabet from user and print from user input to till 'a'

 #include <stdio.h>
 int main ( ) {

    char i='a';

    char n;
    printf("enter your number: ");
    scanf("%c",&n);

    for ( ;n>=i;n--){
        printf("%c\n",n);
    }



    return 0;
 }