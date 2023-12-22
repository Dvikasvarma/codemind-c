#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    int ab[n];
    for(i=1;i<=n;i++)
    {
    scanf("%d",&ab[i]);
    }
    int sea;
    scanf("%d",&sea);
    for(i=1;i<=n;i++)
    {
        if(sea==ab[i])
        {
        f=1;
        break;
        }
        else
        f=0;
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}