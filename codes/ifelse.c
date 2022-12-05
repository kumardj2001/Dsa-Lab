/*wap a program to find maximum between two numbers by if only.
#include<stdio.h>
int main()
{  
  int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
      printf("a is greater than b");
  }
  if(a<b)
  {
      printf("b is greater than a");
  }
  return 0;
}

wap to write a program to find greater between two numbers by if else.
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
      printf("a is greater than b");
  }
  else
  {
      printf("b is greater than a");
  }
  return 0;
}

wap to write a program to find greater of two numbers by ternary or conditional.
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  (a>b)?(printf("a is greater than b")):(printf("b is greater than a"));
  return 0;
}

wap to write a program to find greatest of three numbers by nested if else.
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
 {
    if(b>c)
     printf("a is greatest");
     else
      printf(" c is greatest");
      }
    else 
    {  if(b>c)
         printf("b is greatest");
       else
         printf("c is greatest");
    }
    return 0;
    }

wap to write a progaram to find greater of three numbers by if only.
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter three numbers\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 { 
   if(a>c)
   printf("a is greatest");
   else
   printf("c is greatest");
 }
  if(b>a)
 {
   if(b>c)
   printf("b is greatest");
   else 
   printf("c is greatest");
 }
 return 0;
 }

 wap to write a program to find greater of three by using ternary.
 #include<stdio.h>
 int main()
 {
   int a,b,c;
   printf("enter three numbers");
   scanf("%d%d%d",&a,&b,&c);
   (a>b && a>c)?(printf("a is greatest")):(b>a&&b>c)?(printf("b is greatest")):(printf("c is greatest"));
   return 0;
}

wap to fint whether a number is positive negative or zero.
#include<stdio.h>
int main()
{
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
if(a>0)
printf("number is positie");
if(a<0)
printf("number is positive");
if(a==0)
printf("number is zero");
return 0;
}
 write a program to find whether a number is positive ,negative or zero by ternary.
#include<stdio.h>
int main()
{ 
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  (a>0)?(printf(" number is positive")):(a<0)?(printf("number is negative")):(printf("number is zero"));
   return 0;
}
//write a program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  if(a%5==0)
  printf("number is divisible by 5\n");
  if(a%11==0)
  printf("nuber is divisible by 11\n");
  if(a%5==0)
  {
    if(a%11==0)
    printf("number is diviaible by both 5 and 11\n");
  }
  else
  printf("number is not divisible by 5 and 11\n");
  return 0;
}
//write a program to chcek whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 (a%5==0 && a%11==0)?(printf("number is divisible by 5 and 11")):printf("mumber is not divisible by 5 and 11");
 return 0;
}
//write a program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  if(num%2==0)
  printf("number is even");
  else
  printf("number is odd");
  return 0;
}
#include<stdio.h>
int main()
{  
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  (a%2==0)?(printf("number is even")):(printf("number is odd"));
  return 0;
}
//write a program to check whether a year is leap year or not.
#include<stdio.h>
int main()
{
  int year;
  printf("enter a year\n");
  scanf("%d",&year);
  if((year%4==0&&year%100!=0)||(year%400==0))
    printf("enter year is a leap year");
  else 
  printf("enter year is not a leap year");
}
#include<stdio.h>
int main()
{
  int year;
  printf("enter a year\n");
  scanf("%d",&year);
  ((year%4==0&&year%100!=0)||(year%400==0))?(printf("enter year is leap year")):(printf("enter year is nor a leap year"));
  return 0;
}
//write a program to check whether a character is alphabet or not.
#include<stdio.h>
int main()
{
 char ch;
 printf("enter a character\n");
 scanf("%c",&ch);
 if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
 printf("enter character is a alphabet");
 else
 printf("enter character is not a alphabet");
 return 0;
}
//write a program to chcek whether a character is alphabet or not.
#include<stdio.h>
int main()
{
 char ch;
 printf("enter a character\n");
 scanf("%c",&ch);
 {
   if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
   printf("enter character is a alphabet");
   else
   printf("enter character is not a alphabet");
   return 0;
}
//write a c program to input any alphabet check whether it is a vowel or consonant.
#include<stdio.h>
int main()
{
 char ch;
 printf("enter a character\n");
 scanf("%c",&ch);
 if((ch>=65 && ch<=90)||(ch>=97 &&ch<=122))
{
   printf("enter character is a alphabet\n");
   if((ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')||(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'))
   {
     printf("enter character is a vowel\n");
   }
   else
   {
     printf("enter character is  a consonant\n");
   }
}
else 
{
  printf("eneter character is not a alphahabet\n");
}
return 0;
}*/
