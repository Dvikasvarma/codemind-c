#include<stdio.h>
#include<math.h>
int main()
{
    int n,m=0,r,i,s,a,b,c=0;
    scanf("%d",&n);
    a=n;
    b=n;
    while(b!=0)
    {
        b=b/10;
        c++;
    }
    i=c;
  while(a!=0)
  {
      r=a%10;
       a=a/10;
      s=pow(r,i);
      m=m+s;
      i--;
  }
  
    if(m==n)
    printf("True");
    else
    printf("False");
}