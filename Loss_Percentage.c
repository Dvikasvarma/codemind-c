#include<stdio.h>
int main()
{
    int x,y;
    float lp;
    scanf("%d %d",&x,&y);
    lp=(x-y)*100.0/x;
    printf("%.2f",lp);
    
}