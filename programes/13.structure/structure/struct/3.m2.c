#include <stdio.h>
#include <string.h>

struct student{

    char name[50];
    int rollNo;
    struct marks {

         int phyMarks;
         int chemMarks;
         int mathMarks;
    }marks;
};



int main()
{

    struct student s1;

    strcpy(s1.name, "ritik");
    s1.rollNo = 01;
    s1.marks.phyMarks = 98;
    s1.marks.chemMarks = 95;
    s1.marks.mathMarks = 97;

   // printf("%d",s1.name);
    printf("%d",s1.rollNo);
    printf("%d",s1.marks.phyMarks);
    printf("%d",s1.marks.chemMarks);
    printf("%d",s1.marks.mathMarks);
    

    return 0;
}