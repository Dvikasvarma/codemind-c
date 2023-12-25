#include<stdio.h>
int main()
{
	int i;
	char str[20];
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		str[i]=str[i]+32;
	}
	printf("%s",str);
}