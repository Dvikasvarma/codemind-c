#include<stdio.h>
int main()
{
	int i=0,r;
	scanf("%d",&r);

	while(r!=0)
	{		
	r=r/10;

	i++;
	}
	printf("%d ",i);
}