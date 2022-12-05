/*
//selectionsort.
#include<iostream>
using namespace std;
void selection_sort( int a[], int n )
{
  for(int i=0;i<n-1;i++)
  {
    int min =a[i];
    int min_index=i;
    for(int j=i+1;j<n;j++)
{
   if(a[j]<min)
   {
    min=a[j];
    min_index=j;
   }
}
 int temp;
 temp=a[i];
 a[i]=a[min_index];
 a[min_index]=temp;
  }
}
int main()
{
    int a[10];
    int n, i;
    cout<<"size of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>a[i];
    }
selection_sort(a,n);
for(i=0;i<n;i++)
    {
     cout<<a[i]<<" ";
    }
    cout<<endl;
}


//bubble sort.
#include<iostream>
using namespace std;
void print_array(int a[],int n)
{
for(int i=0;i<n;i++)
      {
     cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort(int a[],int n)
{
for(int i=0;i<n-1;i++)
      {
for(int j=0;j<n-1-i;j++)
{
  if(a[j]>a[j+1])
  {
    int temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
   }
  }
 }

int main()
{
int a[10];
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
bubble_sort(a,n);
print_array(a,n);
}
*/

// selection sort .
#include <iostream>
using namespace std;
void selection_sort(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i] > a[i + 1])
      {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
      for (int k = 0; k < n; k++)
      {
        cin >> a[k];
      }
    }
  }
}
int main()
{
  int a[10];
  int  n;
  cout << "enter the size of array" << endl;
  cin >> n;
  cout << "enter the elements of array" << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }
  selection_sort(a, n);
}
