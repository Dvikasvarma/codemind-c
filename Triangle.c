#include<stdio.h>
int main()
{
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    
    if(s1==s2 && s1==s3 &&s2==s3)
    printf("Equilateral triangle");
     if(s1==s2)
    {
        if(s1!=s3)
    printf("Isosceles triangle");
    }
    else if(s2==s3)
    {
        if(s1!=s3)
    printf("Isosceles triangle");
    }
    else 
    printf("Scalene triangle");
}