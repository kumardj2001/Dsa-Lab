#include<iostream>
using namespace std;
int size=100;
struct q
{
    int item[10];
    int rear;
    int front;
}s;
int dqueue(int b)
{


}
int enqueue(int a)
{
    s.item[s.rear]=s.item[s.rear+1];
   int x=s.item[s.rear+1];  


}

/************************************************/

int initialize()
{
  s.rear=-1;
  s.front=-1;
}

/************************************************/

int is_empty()
{ 
    if(s.rear==s.front)
    {
    return true ;
    }
    else
    {
        return false;
    }
}

/************************************************/

int main()
{ 
    int n;
    cout<<"enter the queue";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 initialize();
 enqueue(100);
 enqueue(200);
 enqueue(300);
 int x=dqueue();
 cout<<x;
 x=dqueue()
 cout<<x;

}