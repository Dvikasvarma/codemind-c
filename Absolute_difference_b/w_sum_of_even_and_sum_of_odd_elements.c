#include<stdio.h>
int main()
{
    int n,i,s=0,t=0;
    scanf("%d",&n);
    int ab[n];
    for(i=1;i<=n;i++)
    {
    scanf("%d",&ab[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ab[i]%2==0)
        s=s+ab[i];
        else
        t=t+ab[i];
    }
    if(t>s)
    printf("%d",t-s);
    else
    printf("%d",s-t);

}