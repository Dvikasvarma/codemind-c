#include<stdio.h>
int add(int p,int q)
{
    int ca=p+q;
    return ca;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=add(a,b);
    printf("%d",c);
}