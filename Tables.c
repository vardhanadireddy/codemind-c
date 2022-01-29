#include<stdio.h>
int main ()
{ 
    int a,b,n,t;
    scanf("%d%d",&b,&n);
    for(a=1;a<=n;a++)
    { 
        if(a%2==1)
        {
          
          t=b*a;
          printf("%d x %d = %d
",b,a,t);
        }
    }
    return 0;
}