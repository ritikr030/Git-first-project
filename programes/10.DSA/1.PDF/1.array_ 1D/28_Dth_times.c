
#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

   // printf("arrays elements are: ");

   
int a;
printf("enter cyclic time: ");
scanf("%d",&a);

for(int i=0;i<a;i++){

    int last=arr[n-1];
 
        for(int i=n-1;i>0;i--){
           
           arr[i]=arr[i-1];
       
        }
      arr[0]=last;
      }

    printf("arrays elements are: \n");

        for(int i=0;i<n;i++){
            
            printf("%d ",arr[i]);
        }

    return 0;
}