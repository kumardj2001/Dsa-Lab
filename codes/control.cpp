/*Write a program to calculate the total salary of a person. The user has to enter the basic 
salary (an integer) and the grade (an uppercase character), and depending upon which the total 
salary is calculated as -
totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic,
 da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300
  if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and 
  then print the integral part only.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{   int allow,basic_salary;
    double hra,da,total_salary,pf;
    char grade;
  cout<<"basic salry is : "<<endl;
  cin>>basic_salary;
  cout<<"grade is : "<<endl;
  cin>>grade;
  hra=(0.2*basic_salary);
   da=(0.5*basic_salary);
   pf=(0.11*basic_salary);
   total_salary=round(basic_salary+hra+da+allow-pf);
   if(grade=='A')
   {
      allow=1700;
   }
    else if(grade=='B')
   {
      allow=1500; 
   }
  else
   {
      allow=1300;  
   }
   cout<<"total salary is : "<< total_salary <<endl;
   return 0;
}