#include<stdio.h>
int main()
{
    int a,s=0,p=1,d;
    scanf("%d",&a);
    
    while (a>0)
     
    {
        d=a%10;
        s=s+d;
        p=p*d;
        a=a/10;
    } 
    if (s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}