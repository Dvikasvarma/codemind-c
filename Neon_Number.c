#include<stdio.h>
int main()
{
    int n,m,i,s=0;
    scanf("%d",&n);
    m=n*n;
    for(i=0;i<m;i++)
    {
        s=m%10;
        s=s+i;
        m=m/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}