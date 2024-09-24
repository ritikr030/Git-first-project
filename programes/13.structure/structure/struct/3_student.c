#include <stdio.h>
#include <string.h>
struct marks
{

    int phyMarks;
    int chemMarks;
    int mathMarks;
};
struct student
{

    char name[50];
    int rollNo;
    struct marks studentmarks;
};



int main()
{

    struct student s1;

    strcpy(s1.name, "ritik");
    s1.rollNo = 01;

    s1.studentmarks.phyMarks = 98;
    s1.studentmarks.chemMarks = 95;
    s1.studentmarks.mathMarks = 97;

    return 0;
}