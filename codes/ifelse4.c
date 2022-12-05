//write a c program to input basic salary of an employee and calculate its gross salary according to fpllowing.
#include<stdio.h>
int main()
{
  float basicsalary,HRA,DA,gross_salary;
  printf("enter basic salry\n");
  scanf("%f",&basicsalary);
  if(basicsalary<=10000)
 { 
  HRA=basicsalary*0.2;
  DA=basicsalary*0.8;
  }
if(basicsalary<=20000)
{
    HRA=basicsalary*0.25;
    DA=basicsalary*0.9;
}
if(basicsalary>20000)
{
    HRA=basicsalary*0.3;
    DA=basicsalary*0.95;
}
gross_salary=HRA+DA+basicsalary;
printf("gross salary is %.2f\n",gross_salary);
return 0;
} 