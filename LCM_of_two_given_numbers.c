#include<stdio.h>
int main()
{
	int i,a,b,n;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		n=i*a;
		if(n%b==0)
		{
			printf("%d",n);
			break;
		}
		
	}
}