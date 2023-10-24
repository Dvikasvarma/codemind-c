#include<stdio.h>
int main()
{
    float x,y,lp;
    scanf("%f%f",&x,&y);
    lp=(x-y)/x*100.0;
    printf("%.2f",lp);
}