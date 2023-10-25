#include<stdio.h>
int main()
{
    int x1,x2,y2,y1,t;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    int t1=x1+y1;
    int t2=x2+y2;
    if(t1>t2)
    t=t2;
    else
    t=t1;
    printf("%d",t);
}