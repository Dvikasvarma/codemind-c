#include <stdio.h>
int main() 
{
    int num,f,l,sum,n1;
    scanf("%d", &num);
    n1=num;
    while (num >= 10)
    {
        num=num/10;
    
    f= num;
    l= n1 % 10;
    sum = f+l; 
    }
    printf("%d", sum);
    
}