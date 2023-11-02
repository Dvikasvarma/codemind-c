#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,c,d;
    scanf("%d %d",&a,&b);
    for(i=++a;i<b;i++)
    {
       printf("%d ",i);
        c=pow(i,2);
         d=pow(i,3);
       printf("%d %d
",c,d);
    }
}