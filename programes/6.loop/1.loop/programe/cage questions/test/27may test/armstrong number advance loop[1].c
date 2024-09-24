#include<stdio.h>
int main()
{
    int n,m,sol=0,pre=0,count=0,temp=1,rem=0,power=1,result=0;
    
    printf("enter first number");
    scanf("%d",&n);
    printf("enter second number");
    scanf("%d",&m);
    
    while(n<=m)
    {
        pre=n;
        sol=n;
        while(pre!=0)
        {
            pre=pre/10;
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
        }
            
            if(result==sol)
            {
                printf("%d is an armstrong no\n",result);
            }
            result=0;
            temp=1;
            power=1;
            count=0;
            n++;
    }
}