#include<stdio.h>
int main()
{
    int l,b,w,c,l1,b1,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    l1=l+2*w;
    b1=b+2*w;
    t=((l1*b1)-(l*b))*c;
    printf("%d",t);
}