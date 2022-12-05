//roots of a quadratic equation.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  //r=(-b+-sqrt(b*b-(4*a*c)))/2*a.
  int r1,r2,a,b,c;
  cout<<"enter the values of a ,b and c"<<endl;
  cin>>a>>b>>c;
  r1=(-b + sqrt(b*b-4*a*c))/2*a;
  r2=(-b - sqrt(b*b-4*a*c))/2*a;
 cout<<"r1:"<< r1 <<endl<< "r2:" <<r2;

}
