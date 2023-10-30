#include<stdio.h>
int main()
{
    float salary,hra,da,pf,gs;
    scanf("%f 
 %f 
 %f",&salary,&hra,&da);
    pf=0.12*salary;
    gs=salary+hra+da+pf;
     printf("%.2f
%.2f",pf,gs);
}