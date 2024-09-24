
#include<stdio.h>

void odd(int a){

   // int odd=(a%2!=0);
    printf("%d is odd",a);

    return ;
}

void even(int a){

  //  int even=(a%2==0);
    printf("%d is even",a);
    return ;
}


int main () {

    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    if(n%2!=0){
        odd(n);
    }else{

        even(n);
    }
        
    


    return 0;
}