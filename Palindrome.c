#include<stdio.h>
int main()
{
    int n,t,r,s=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==t)
    printf("True");
    else
    printf("False");
}