#include <stdio.h>
int main()
{
    int row;
    int a=65;
    
    printf ("Enter the number of rows:");
    scanf ("%d",&row);
    for (int i=0;i<row;i++){
        int b=a;
        for (int j=1;j<=row;j++){   

            printf("%c",b);         
           b++;
        }
        printf ("\n");
        a++;
    }
    return 0;
}