#include<stdio.h>
int main()
{
    int i,n,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0 && n!=i)
      j=i+j;
    }
    printf("%d",j);
}