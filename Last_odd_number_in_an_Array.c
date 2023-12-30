#include <stdio.h>
int main() 
{
   int n,i,a;
   scanf("%d", &n);
   int arr[n];

   for ( i = 0; i < n; i++) 
   {
       scanf("%d ", &arr[i]);
   }
   for ( i = 0; i < n; i++)
   {
       if(arr[i]%2!=0)
       {
       a=arr[i];
       }
   }
   printf("%d",a);
}
