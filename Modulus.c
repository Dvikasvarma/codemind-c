#include<stdio.h>
int mod(int n,int m)
{
    int c=n%m;
    return c;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int z=mod(n,m);
    printf("%d",z);
}