#include<stdio.h>
#include<string.h>

struct book
{
    char bookName[50];
    char authorName[50];
    int price;
} a,b,c;


int main (){

    strcpy(a.bookName,"the great expectation");
    a.price=200;

    printf("%s",a.bookName);

    return 0;
}