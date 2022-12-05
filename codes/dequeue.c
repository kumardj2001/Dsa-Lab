struct dequeue
{  
    int a[20];
    int f;
    int r;
}*dq;

 void delete(front)
{ 
  front=(front+1)%6;

}
 
void intsert(rear)
{
  int rear=(rear+1)%6;
}

void delete(rear)
{
    rear = (rear-1+6)%6;
}

void insert_front (front)
 {
   front = (front-1+6)%6;
 }



#include<stdio.h>
int main()
{ 
  int front=0,rear=0;
  delete (front);
  insert (rear);
  delete (rear);
  insert_front(front);
}