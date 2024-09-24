//14.	Write a C program to input cost price and selling price of a product and check profit or loss.
 #include <stdio.h>
 int main () {
    
    int cp;
    printf("cost price=");
    scanf("%d",&cp);

    int sp;
    printf("selling price=");
    scanf("%d",&sp);

    if (sp>cp){
        printf("profit");
    }
    else{
        printf("loss");

    }

 }