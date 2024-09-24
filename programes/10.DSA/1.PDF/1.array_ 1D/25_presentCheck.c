
#include<stdio.h>
int main () {

    int n;
    printf("enter your array size: ");
    scanf("%d",&n);

    int arr[n];

    int count=0;

    printf("enter your arrays elements: \n");

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    printf("arrays elements are: \n");

    int a;
    printf("enter your check number: ");
    scanf("%d",&a);

        for(int i=0;i<n;i++){
            
           if(arr[i]==a){
            count++;
            //printf("%d is present",a);
           }
     
        }

        if(count>0){
            printf("%d is present",a);
        }else{
            printf("%d is not present",a);
        }

    return 0;
}