#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    if(w==x)
    printf("YES");
    else if(w==y)
    printf("YES"); 
    else if(w==z)
    printf("YES");
    else if(w==x+y)
    printf("YES");
    else if(w==y+z)
    printf("YES");
    else if(w==x+z)
    printf("YES");
    else if(w==x+y+z)
    printf("YES");
    else
    printf("NO");
    
}