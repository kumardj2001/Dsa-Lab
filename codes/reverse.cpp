/*
  // length of a string.
#include<iostream>
using namespace std;
void lenght(string b)
{
int i=0,count=0;
while(b[i]!='\0')
{
  count++;
  i++;
}
cout<<"length of string is :"<<count<<endl;
}

int main()
{
 string b;
 cout<<"enter a string "<<endl;
 cin>>b;
length(b); 
}
//lenght of a string.
#include<iostream>
using namespace std;
int length(char b[])
{
  int i=0,count=0;
  while(b[i]!='\0')
  {
    count++;
    i++;

  }
 return count;
}
int main()
{
  char b[10];
  cout<<"enter a string "<<endl;
  cin>> b;
 cout<<"length of  string is "<<length(b);

}
//palindrome of a string.
#include<iostream>
using namespace std;
int palindrome(string b)
{
  int n= b.length();
 int i=0,j=n-1;
 int flag=true;
 while(i<=j)
 {
   if(b[i]==b[j])
   {
    i++;
    j--;
   }
   else
   {
    flag =false;
   }
   return flag;
 }
}
int main()
{  int x;
  string b;
  cout<<"enter a string"<<endl;
  cin>>b;
  x=palindrome(b);
 if (x==false)
 {
  cout<<"not a palindrome"<<endl;
 }
 else
 {
  cout<<"a palindrome"<<endl;
 }
}
// reversing of a string.
#include<iostream>
using namespace std;
void reversing(string b)
{
  int n=b.length();
 int i=0,j=n-1;
 while(i<=j)
 {                                                                                                                                                                                    
   int temp=b[i];
   b[i]=b[j];
   b[j]=temp;
   i++;
   j--;
 }
for(int k=0;k<=n;k++)
{
  cout<<b[k];
}
}
int main()
{
  string b;
  cout<< "enter a string "<<endl;
  cin>> b;
  reversing(b);
}
//word count in a paragraph.
#include<iostream>
using namespace std;
int  wordcount(char b[])
{
 int i=0,count=0;
 while(b[i]!='\0')
 {
   count++;
   i++;
 }
 return count;
}
int main()
{
 char b[100];
 cout<<"enter a paragraph"<<endl;
 cin.getline(b,100);
 int x=wordcount(b);
 cout<<"no. of word in the paragraphs are: "<< x <<endl;
}
//program for cconverting lower case letter to upper case and vice a versa .
//The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of 
//the uppercase alphabet is from 65 to 90.
#include<iostream>
using namespace std;
void convertor(string b)
{ 
  int i=0,k;
  int n= b.length();
  int j=n-1;
  while(i<=j)
  {
 if( b[i]>=97 && b[i]<=122)
 {
   b[i]=b[i]-32; 
   i++;
 }
 else if (b[i]>=65&& b[i]<=90)
 {
   b[i]=b[i]+32;
   i++;
 }
  }
for(k=0;k<=n;k++)
{
  cout<<b[k];
}

}

int main()
{
 string b;
 cin>>b;
 convertor(b);
 
}

//program for comparing two strings.
#include<iostream>
using namespace std;
void compare(string a ,string b)
{
  int n=a.length();
  int m=a.length();
if(n>m)
{
  cout<<" length of string 1 is big"<<endl;
}
else if(m>n)
{
 cout<<" length of string 2 is big"<<endl; 
}
else 
{
  cout<<"length of strings are equal"<<endl;
}
}
int main()
{
  string a,b;
  cout<<"enter strings one" << a <<endl;
  cin>> a ;
  cout<<"enter strings two" << b <<endl;
  cin>> b ;
  compare(a,b);
}
//concoatination of two strings.
#include<bits/stdc++.h>
using namespace std;
void concatination(char a[], char b[])
{
 strcat(a,b);
 cout<<a<<endl;

}
int main()
{
  char a[10],b[10];
  cout<<"enter string 1"<<endl;
  cin>>a;
  cout<<"enter string 2"<<endl;  
  cin>>b;
  concatination(a,b);
}*/
//trim space.
#include<iostream>
using namespace std;
void trimspace(char a[])
{
int i=0;
while(i<=19)
{
if(a[i]==32)
{
  i++;
}
}
for(int j=0;j<=19;j++)
{

  cout<<a[j];
}
}
int main()
{
  char a[20];
  cout<<"enter a string"<<endl;
  cin.getline(a,20);
  trimspace(a);
}

