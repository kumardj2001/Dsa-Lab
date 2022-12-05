// linear search.
#include <iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
        return i;
    }
    else
    {
        cout<<"element is not present"<<endl;
    }
  }

}
int main()
{
    int a[10], n;
    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "enter the elements of array" << endl;
    for (int i = 0; i <= n; i++)
    { 
        cin>>a[i];
    }
    int x;
    cout<<"enetr the searching element"<<endl;
    cin >>x;
    int y=linear_search(a,n,x);
    cout<<"searchung element is at the position :"<< y <<endl;
}