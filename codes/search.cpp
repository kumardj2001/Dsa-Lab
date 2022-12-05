// linear search.
/*#include <iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10], n;
    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "enetr the searching element" << endl;
    cin >> x;
    int y = linear_search(a, n, x);
    if (y == -1)
    {
        cout << "searching element is not present :" << endl;
    }
    else
    {
        cout << "searching element is at the index :" << y << endl;
    }
}*/
#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{ 
    int start=0,end=n-1;
  
  for(int i=start;i<=end;i++)
  { 
    int mid=(start+end)/2;
    if(a[mid]==x)
  {
    return mid;
  }
  else if(x>a[mid])
  {
    start =mid+1;
  }
  else 
  {
    end =mid-1;
  }
  }
 return -1;
}
int main()
{
int a[10], n;
    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "enetr the searching element" << endl;
    cin >> x;
    int y=binary_search( a,n,x);
    if(y==-1)
    {
        cout<<"the element is not present in the array "<<endl;
    }
    else
    {
    cout<<"the searched element is at the index :"<<y<<endl;
    }
}