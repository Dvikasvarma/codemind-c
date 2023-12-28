#include <stdio.h>
#include <math.h>

int sum(int n)
{
   int s=1; 
   for (int i=2; i<=sqrt(n);i++) 
   {
       if (n % i == 0) 
       {
           s=s+i;
           if (i * i != n) 
           { 
               s=s+n/i;
           }
       }
   }
   return s;
}

int main() 
{
   int n, m;
   scanf("%d %d", &n, &m);

   int u = sum(n);
   int v = sum(m);

   if (u== m && v == n) 
       printf("Amicable
");
   else 
       printf("Not Amicable
");
   
}
