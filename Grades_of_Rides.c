#include<stdio.h>
int main()
{
    int g,hurl,spin,speed;
    scanf("%d %d %d",&hurl,&spin,&speed);
    if(hurl>50 && spin>60 && speed>100)
    g=10;
    else if(hurl>50 && spin>60)
    g=9;
    else if(spin>50 && speed>100)
    g=8;
    else if(hurl>50 && speed>100)
    g=7;
    else if(hurl>50 || spin>60 || speed>100)
    g=6;
    else
    g=5;
    printf("%d",g);
}