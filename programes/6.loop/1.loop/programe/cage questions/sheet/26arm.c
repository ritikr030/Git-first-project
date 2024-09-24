#include<stdio.h>
int main()
{
    int n,count=0,rem=0,power=1,temp=1,result=0;
    printf("enter a number");
    scanf("%d",&n);
    
    int prev=n;
    int sol=n;
    while(prev!=0)
    {
        prev=prev/10;
        count++;
    }
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        while(power<=count)
        {
            temp=temp*rem;
            power++;
        }
        result=result+temp;
        printf("s=%d",result);
        temp=1;
        power=1;
      
    }
    if(result==sol)
    {
        printf("%d is a armstrong no",result);
    }
    else
    {
        printf("%d is not a armstrong no\n\n",sol);
        printf("because after checking %d is not same as %d",sol,result);
        
    }
    
}