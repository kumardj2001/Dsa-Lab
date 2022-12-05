/*#include<iostream>
using namespace std;
 void palindrome_string(char input[])
{  
  
  int i=0,j=;
while(input[i] !='\0')
{
if(input[i]==input[ ])
{
cout<<"palindrome";
}
}
}

int lenght_string(char input[])
{
  int count=0;
  int i=0;
  while(input[i] !='\0')
  { 
     count++;
     i++;
  }
  return count;
   
}
int main()
{ 
  char b[10];
  cout<<"enter  your name"<<endl;
  cin>> b;  
  cout<<"your name is "<<b<<endl;
   cout<<"length of string is "<<lenght_string(b)<<endl;
   cout<<palindrome_string(b)<<endl;

}

#include<iostream>
using namespace std;
void palindrome(string str)
{ 
  int n=str.length();
  int i=0, j=n-1;
  int flag= true;
  while(i<=j)
{
  if( str[i]==str[j])
  {
  i++;
  j--;
  }
  else
  {  
      flag == 0;
       break;
  }
  }
  if (flag==0)
  {
    cout<<"not a palindrome"<<endl;
  }
  else
  {
    cout<<"palindrome"<<endl;
}
}

int main()
{
  string str="Sanjna";
 palindrome(str);
}*/

#include<iostream>
using namespace std;
void reversing(string str)
{
 int n= str.length();
 cout<<n;
 int i=0, j=n-1;
 while(i<=j)
 {
   int temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i++;
   j--;
 }
 for(int k=0;k<=n;k++)
 {
  
 cout<<str[k];
 
 }
}


int main()
  {
    string str="Sanjana";
    reversing(str);
  }
