#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    if(n>=3 && n<=100)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
    	}
    	printf("
");
	}
 for(k=n-1;k>=1;k--)
    {
        for(l=k;l>=1;l--)
        {
        printf("*");
    	}
    	printf("
");
	}
    }
    else 
    printf("The pattern is not possible");
    
}
