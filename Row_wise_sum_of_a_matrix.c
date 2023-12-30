#include<stdio.h>
int main()
{
    int n,m,i,j,f=0;
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
        f=0;
        for(j=0;j<m;j++)
        {
            f=f+a[i][j];
        }  
        printf("%d ",f);
    }
  
}