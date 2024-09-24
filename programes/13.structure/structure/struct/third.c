#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
   struct student *adr;
    
};

int main (){

    struct student a,b,c;
    strcpy(a.name,"ritik");
    a.adr=&b;

    strcpy(b.name,"raj");
    b.adr=&c;

    strcpy (c.name,"abhi");
    c.adr=NULL;

    struct student *node=&a;
    while (node!=0)
    {
        printf("%s\n",node->name);
        node=node->adr;
    }
    


} 