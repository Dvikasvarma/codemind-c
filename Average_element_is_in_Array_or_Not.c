#include <stdio.h>
int main() 
{
   int n,i,f=0;
   int s=0,a;
   scanf("%d", &n);
   int arr[n];

   for ( i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
   for ( i = 0; i < n; i++) {
       s+=arr[i];
   }
   a=s/n;
   for(i=0;i<n;i++)
   {
       if(arr[i]==a)
       f=1;
       
   }
   if(f==1)
   printf("True");
   else
   printf("False");
}
