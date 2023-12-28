#include <stdio.h>
int gcd(int n, int m) 
{
    int gcd=1;
   for (int i=2;i<=m;i++)
   {
        if (n % i == 0 && m % i == 0) {
            gcd = i; 
            }
    }

    return gcd;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int res=gcd(num1, num2);
    printf("%d", res);
    
}
