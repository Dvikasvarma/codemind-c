#include <stdio.h>
int main() 
{
   int n,i,z,a;
   int f=0;
   scanf("%d", &n);
   int arr[n];

   for ( i = 0; i < n; i++) 
   {
       scanf("%d", &arr[i]);
   }
   scanf("%d",&z);
   for ( i = 0; i < n; i++)
   {
       if(arr[i]==z)
       {
       f=1;
       a++;
       }
   }
   if(f==1)
   printf("%d",a);
   else
   printf("0");
}
