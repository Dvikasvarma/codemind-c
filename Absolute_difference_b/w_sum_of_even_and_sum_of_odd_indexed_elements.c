#include<stdio.h>
int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    int ab[n];
        for(i=0;i<n;i++)
    {
            scanf("%d",&ab[i]);
    }
        for(i=0;i<n;i++)
    {
            if(i%2==0)
            {
                a=a+ab[i];
            }
            else
            {
                b=b+ab[i];
            }
    }
    printf("%d",a-b);
}