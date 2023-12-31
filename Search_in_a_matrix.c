#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int x,f=0;
    scanf("%d",&x);
       for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(x==a[i][j]){
            f=1;}
        }
    }
    if(f==1)
    printf("%d",1);
    else
    printf("%d",0);
}