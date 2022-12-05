/*#include<iostream>
using namespace std;
void insert_pq(int p)
{
   int idx;
    if(idx==-1)
    {
      idx++;
      pri[idx]=p;
    }
     else
     {
       for(int i=idx;i>=0;i--)
       {
         if(p<pri[i])
         {
            pri[i+1]=pri[i];
            pri[i]=p;
         }

       }
     }
}
int main()
{
   
}
*/

#include<iostream>
using namespace std;
void bubble_sort(int a[], int n)
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
    cout<<"sorted array is"<<endl;
    for(int l=0;l<n;l++)
    {
    cout<<a[l];
    }

}
 void selection_sort(int a[],int n)
{  
    for(int i=0;i<n-1;i++)
    {
    int min=a[i],minindex=i; 
   for(int j=i+1;j<n;j++)
   {
     if(a[j]<min)
     {
        min=a[j];
        minindex=j;
     }
   } 
   int temp=a[i];
   a[i]=a[minindex];
   a[minindex]=temp;
    }
    cout<<"sorted array is :"<<endl;
    for(int k=0;k<n;k++)
    {
    cout<<a[k];
    }
    cout<<endl;
}
int main()
{ 
  int a[10],n;
  cout<<"enter the size of array"<<endl;
  cin>>n;
  cout<<"enter the elements of array"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
 selection_sort(a,n);
  bubble_sort(a,n);

}



