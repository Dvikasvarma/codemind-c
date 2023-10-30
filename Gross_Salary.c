
#include<stdio.h>
int main()
{
 int salary;
 float da,hra,gs;
 scanf("%d",&salary);
 if(salary<=10000)
 {
     da=(80.0/100.0)*salary;
     hra=(20.0/100.0)*salary;
 }
 else if(salary<=20000)
 {
     da=(90.0/100.0)*salary;
     hra=(25.0/100.0)*salary;
 }
 else if(salary>20000)
 {
     da=(95.0/100.0)*salary;
     hra=(30.0/100.0)*salary;
 }
 gs=salary+da+hra;
 printf("%.2f",gs);
}