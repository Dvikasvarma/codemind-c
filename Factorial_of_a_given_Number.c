#include<stdio.h>
int main()
{
    int n,i,s=1;
    scanf("%d",&n);
   while(n>0)
   {
       s=n*s;
       n--;
   }
    printf("%d",s);
}