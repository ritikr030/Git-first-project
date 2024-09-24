#include<stdio.h>
struct student{

    char name[50];
    int roll_number;
    int marks;
};

int main (){

    struct student s1;
    printf("enter your name: ");
    fgets(s1.name,50,stdin);
    //puts(s1.name); 
    
    s1.roll_number;
    printf("enter your roll number: ");
    scanf("%d",&s1.roll_number);
   // printf("%d\n",s1.roll_number);

    s1.marks=100;
    printf("enter marks: ");
    scanf("%d",&s1.marks);
   // printf("%d\n",s1.marks);

}