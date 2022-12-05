/*#include<iostream>
using namespace std;
 
 int main()
 {
   int c=0,d;
   struct distance
   {
      int feet;
      int inch;
   }distance1,distance2;
   
   cout<<"enter the first distance in feet and inch:";
   cin>>distance1.feet>>distance1.inch;
   cout<<"enter the second distance in feet and inch:";
   cin>>distance2.feet>>distance2.inch;
   if((distance1.inch + distance2.inch)%12!=0)
   {
      c=(distance1.inch + distance2.inch)/12;
      d=(distance1.inch + distance2.inch)%12;
   }
   cout<<distance1.feet+distance2.feet+c<<" "<<d<<endl;
 }
 #include<iostream>
 using namespace std;
 int main()
 {
    struct time
    {
       int hour;
       int min;
       int sec;

    }time1,time2;

  cout<<"enter the first time in hour minute and second"<<endl;
  cin>>time1.hour>>time1.min>>time1.sec;
    cout<<"enter the second time in hour minute and second"<<endl;
  cin>>time2.hour>>time2.min>>time2.sec;


 }

#include<stdio.h>
int mian()
{
   int j;

  char str[10];
  scanf("%s",str);
  while(str[i]!='\0')
  {
    if(str[i]=='('|| str[i]=='{' || str[i]=='[')
    {
      s[g]=str[i];
      j++;
    }

  }
}*/



#include<stdio.h>
int mian()
{
  char A[3];
  char B[3];
  printf("enter the elements of firts array\n");
  for(int i=0; i<10; i++)
  {
    scanf("%s",&A[i]);
  }
return 0;
}