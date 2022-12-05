/*
//factorial.
#include<stdio.h>
int fact(int n, int f )
{
  if(n==1)
  return f;
  else
  { 
    f=f*n;
  return fact(n-1,f);
}
}
int main()
{
int n,f=1,y;
scanf("%d",&n);
y=fact(n,f);
printf("%d",y);
  }

//hcf & lcm.
#include<iostream>
using namespace std;
int lcm(int a,int b,int x )
{
   x=x+b;
if(x%a==0 && x%b==0)
return x;
else
return lcm(a,b,x);

}
int main()
{
int a,b,x=0;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
if(a>b)
lcm(b,a,x);
else
lcm(a,b,x);
cout<<lcm(a,b,x);
}
//fibonacci using recursion
#include<iostream>
using namespace std;
int dat[101];
int fib(int n)
{
   if(n==1||n==2)
   return dat[n]=n-1;
   else
   {  
    if(dat[n]==0)
    dat[n]=(fib(n-1)+fib(n-2));
   }
  return dat[n];
   }

int main()
{ 

  int i;
  for(i=0;i<=100;i++)
  {
printf("%d %d\n",i,fib(i));

  }
}
#include<iostream>
using namespace std;
void toh(int n,char x,char y,char z)
{
  if(n==1)
  {
    printf("move disc %d from %c to %c\n" ,n,'x','y');
  return;
  }
toh(n-1,x,z,y);
printf("move disc %d from %c to %c\n",n,'x','y');
toh(n-1,y,x,z);
}


int main()
{ 
  char a,b,c;
  int x=3;
toh(x,a,b,c);
}*/