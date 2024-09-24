#include <stdio.h>
union student{
    int rollNo;
};

int main (){

    union student s1;

    s1.rollNo=5;
    s1.rollNo=10;

    printf("%d",s1.rollNo);
}