#include <stdio.h>
#include<string.h>


struct person{
    char name[50];
    int age;
    char add;
};


int main (){
    
    struct person p1;
    strcpy(p1.name,"ritik");
   // p1.name='ritik';
    p1.age=20;
    p1.add='jaganpura';

    struct person p2;
    strcpy(p2.name,"abhijeet");
   // p2.name='abhijeet';
    p2.age=22;
    p2.add='RMS colony';
    
    struct person p3;
    strcpy(p3.name,"abhi");
   // p3.name='abhishek';
    p3.age=20;
    p3.add="rk nagar";
    




    return 0;
}