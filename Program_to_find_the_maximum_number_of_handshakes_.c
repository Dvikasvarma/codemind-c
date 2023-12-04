#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        s=s+i;
    }
    printf("%d",s);
}