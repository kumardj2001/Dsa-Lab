//write a program to print number from 1 to 10.
/*#include<stdio.h>
int main()
{
   int i;
   printf("enter the valiue of i\n");
   scanf("%d",&i);
   while(i<=10)
   {
     printf("%d\n",i);
     i=i+1;
   }
   return 0;
}
//write a program to print number from 1 to 10.
#include<stdio.h>
int main()
{
   int i;
   i=1;
   while(i<=10)
   {
     printf("%d\n",i);
     i=i+1;
   }
   return 0;
}
//write a program to print number from 1 to 10 by for loop.
#include<stdio.h>
int main()
{  int i;
   for(i=1;i<=10;i++)
   {
     printf("%d\n",i);
   } return 0;}

//write a program to print number in revrse frfom 10 to 1.
#include<stdio.h>
int main()
{
   int i;
   i=10;
   while(i>=1)
   {
     printf("%d\n",i);
     i=i-1;
   }
   return 0;
   }
//write a program to print number in revrse frfom 10 to 1 by for loop.
#include<stdio.h>
int main()
{
   int i;
   for(i=10;i>=1;i--)
   {
     printf("%d\n",i);
   }
   return 0;}
//write a program to write alphabet from a to z.
#include<stdio.h>
int main()
{
  char ch=65;
  while(ch<=90)
  {
      printf("%c\n",ch);
      ch=ch+1;
 }
return 0;
}
//write a program to write alphabet from a to z.
#include<stdio.h>
int main()
{
  char ch=65;
  for(;ch<=90;ch++)
  {
    printf("%c\n",ch);
  }
  return 0;}
//write a c program to print even numbers between 1 to 100.
#include<stdio.h>
int main()
{
  int i=2,num;
  num=100/2;
  while(i<=100)
  {
   printf("%d\n",i);
   i=i+2;
   }   
printf("total number of evem numbers between 1 to 100 are: %d",num);
return 0;
}
//write a c program to print even numbers between 1 to 100 by for loop.
#include<stdio.h>
int main()
{ 
  int i;
  printf("even numbers between 1 to 100 are\n");
  for(i=2;i<=100;i=i+2)
  {
    printf("%d\n",i);
  }
  return 0;}
#include<stdio.h>
int main()
{
  int i,num;
  printf("enter number\n");
  scanf("%d",&i);
  num=100/2;
  while(i<=100)
  {
   printf("%d\n",i);
   i=i+2;
   }   
printf("total number of evem numbers between 1 to 100 are: %d",num);
return 0;}
//write a c program to write all odd numbers between between 1 to 100.
#include<stdio.h>
int main()
{
  int i;
  i=1;
  printf("all odd numbers between 1 to 100 are: \n");
  while(i<=100)
  { 
    printf("%d\n",i);
    i=i+2;
  }
  return 0;
}
//write a c progra to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main()
{
  int i,sum,n;
  i=1;
  sum=0;
  printf("enter number\n");
  scanf("%d",&n);
  while(i<=n)
{
 sum=sum+i;
  i=i+1;
}
printf("sum of all natural numbers between 1 to n is: %d\n",sum);
return 0;
}*/
#include<stdio.h>
int loop(int x)
{
  int i=0;
 while(i<x)
 {
  return i;
 }

}

int main()
{
  int x,y;
printf("enter a number\n");
scanf("%d",&x);
 y=loop(x);
 printf("%d",y);
}