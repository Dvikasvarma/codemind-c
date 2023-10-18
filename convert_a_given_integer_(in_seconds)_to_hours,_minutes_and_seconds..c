#include<stdio.h>
int main()
{
    int s,h,m,s1;
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s1=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s1);
}