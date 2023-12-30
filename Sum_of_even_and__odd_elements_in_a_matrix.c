#include<stdio.h>
int main()
{
    int n,m,i,j,e=0,o=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         if(a[i][j]%2==0)
         e=e+a[i][j];
         else
         o=o+a[i][j];
        }
    }
    printf("%d %d",e,o);
}