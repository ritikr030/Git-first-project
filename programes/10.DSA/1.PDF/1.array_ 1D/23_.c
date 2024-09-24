
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


    for(int i=0;i<n;i++){

        int count=1;
        for(int j=i;j<n;j++){

            if(arr[i]==arr[j+1]){

                    arr[i]==arr[j];
                    
                count++;
               printf("dublicate= %d ",arr[i]);
            }
             
        }
            if(count>1){
                printf("and its count=%d\n",count); 
            }
       
    }
      

    return 0;
}