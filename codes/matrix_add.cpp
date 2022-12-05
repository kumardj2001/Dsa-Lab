/*#include<iostream>
using namespace std;
int main()
{
  int a[10][10],b[10][10],m,n,p,q,c[20][20];
  cout<<"enter the no. of rows and column of first matrix"<<endl;
  cin>>m>>n;
  cout<<"enter the elemnt of first mmatrix"<<endl;
 for(int i=0;i<m;i++)
   {  
      for(int j=0;j<n;j++)
     {
       cin>>a[i][j];
     }
   }
cout<<"enter the rows and column of second matrix"<<endl;
  cin>>p>>q;
  cout<<"enter the elemnt of second mmatrix"<<endl;
 for(int i=0;i<p;i++)
   {  
      for(int j=0;j<q;j++)
     {
       cin>>b[i][j];
     }
   }
   cout<<" the matrix :"<<endl;
    for(int i=0;i<p;i++)
   {  
      for(int j=0;j<q;j++)
     {
       c[i][j] = a[i][j] + b[i][j];
       cout<<c[i][j]<<" ";
     }
     cout<<endl;
   }
}
*/


#include<bits/stdc++.h>
using namespace std;
void has(int final[],int key,int value,int n)
{
	int m= (key+1)%n;
	if(final[m]==0)
		final[m]=value;
	else
		has(final,m,value,n);
return;
}


int main()
{ int n;
  cin>>n;
  int key[n]={0};
  int value[n]={0};
  int final[n]={0};
  for(int i=0;i<n;i++){
  	cin>>key[i];
  	cin>>value[i];
  }
  for(int i=0;i<n;i++){
  	if(final[key[i]]==0)
  		final[key[i]]=value[i];

  	else{
  		has(final,key[i],value[i],n);
  	}
  }
 for(int i=0;i<n;i++){
 	cout<<i<<":"<<final[i]<<endl;
 }
return 0;
}


