#include<stdio.h>
int main()
{
    int l,b,w,c,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    t=((2*(l+w)*w)+(2*(b+w)*w))*c;
    printf("%d",t);
}
