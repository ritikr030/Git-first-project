//21.Write a program to print number 1 to 10 but skip whose divisible by 3 using CONTINUE keyword.

#include<stdio.h>
int main () {
  
  int i=1;

  int n;
  printf("enter your numbe: ");
  scanf("%d",&n);

  for (i;i<=n;i++){
    if (i%3==0){
        continue;
        i++;
    }
    printf("%d ",i);
      
  }


    return 0;
}