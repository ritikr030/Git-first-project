#include<stdio.h>

int reme(int x,int y){
    int rem=x%y;

    printf("rem=%d\n",rem);

    return rem;
}


int quoe(int a,int b){
    
    int quo=a/b;

    printf("quotutent=%d\n",quo);

    return quo;
}




int main () {

    int f;
    printf("enter your number: ");
    scanf("%d",&f);

    int s;
    printf("enter your number: ");
    scanf("%d",&s);

    quoe(f,s);
    reme(f,s);

    return 0;
}