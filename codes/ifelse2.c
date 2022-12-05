//write a program to input  any character and check whether it is alphabet, digit or special character.
/*#include<stdio.h>
int main()
{
 char ch;
 printf("enter any character\n");
 scanf("%c",&ch);
 if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
 printf("enter character is a alphabet\n");
 else if(ch>='0'&&ch<='9')
 {printf("eneter character is digit\n");}
 else
 {printf("enter character is a special character\n");}

 return 0;
}
//wap to check whether a alphabet is uppercase or lowercase.
#include<stdio.h>
int main()
{   
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {printf("enter character ia an lowercase alphabet\n");}
     else if (ch>='A'&&ch<='Z')
     {printf("enter character is a uppercase alphabet\n");}
     else 
     {printf("enter character is not an alphabet\n");}
     return 0;
}
// write a program to print week number and print week days.
#include<stdio.h>
int main()
{
 int week;
 printf("enter week number\n");
 scanf("%d",&week);
 if(week==1)
 printf("monday");
 else if (week==2)
   printf("tuesday");  
 else if (week==3)
 printf("wednesay");
 else if(week==4)
 printf("thursday");
 else if(week==5)
 printf("friday");
 else if(week==6)
 printf("saturday");
 else if(week==7)
 printf("sunday");
 else 
 printf("not a day in week");
 return 0;
}
// write a program to input month number and print number of days in that month
#include<stdio.h>
int main()
{
 int month;
 printf("enter month number\n");
 scanf("%d",&month);
 if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
 printf("number of days are 31\n");
 else if(month==2||month==4||month==6||month==9||month==11)
 printf("number of days are 30\n");
 else
 printf("not a valid month\n");
 return 0;
}
//write a program to count notes in given amount.
#include<stdio.h>
int main()
{
  int amount, n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
   n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
  printf("enter amount\n");
  scanf("%d",&amount);
  if(amount>=2000)
 { printf("number of notes are: \n");
    n2000=amount/2000;
    amount-=2000*n2000;
}
    if(amount>=500)
{
    n500=amount/500;
    amount-=500*n500;
}
 if(amount>=200)
 {
   n200=amount/200;
  amount-=200*n200;
 }
 if(amount>=100)
 {
      n100=amount/100;
     amount-=100*n100;
 }
if(amount>=50)
{
     n50=amount/50;
    amount-=50*n50;
}
if(amount>=20)
{
     n20=amount/20;
    amount-=20*n20;
}
if(amount>=10)
{
    n10=amount/10;
    amount-=10*n10;
}
if(amount>=5)
{
    n5=amount/5;
    amount-=5*n5;
}
if(amount>=2)
{
     n2=amount/2;
    amount-=2*n2;
}
if(amount>=1)
{
  n1=amount;
}
printf("note2000 =%d\n",n2000);
printf("note500 =%d\n",n500);
printf("note200 =%d\n",n200);
printf("note100 =%d\n",n100);
printf("note50 =%d\n",n50);
printf("note20 =%d\n",n20);
printf("note10 =%d\n",n10);
printf("note5 =%d\n",n5);
printf("note2 =%d\n",n2);
printf("note1 =%d\n",n1);
return 0;
} 
#include<stdio.h>
int main()
{
  int amount, n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
   n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
  printf("enter amount\n");
  scanf("%d",&amount);
  if(amount>=2000)
 { printf("number of notes are: \n");
    n2000=amount/2000;
    amount-=2000*n2000;
    printf("note2000 =%d\n",n2000);
}
    if(amount>=500)
{
    n500=amount/500;
    amount-=500*n500;
    printf("note500 =%d\n",n500);
}
 if(amount>=200)
 {
   n200=amount/200;
  amount-=200*n200;
  printf("note200 =%d\n",n200);
 }
 if(amount>=100)
 {
      n100=amount/100;
     amount-=100*n100;
     printf("note100 =%d\n",n100);
 }
if(amount>=50)
{
     n50=amount/50;
    amount-=50*n50;
    printf("note50 =%d\n",n50);
}
if(amount>=20)
{
     n20=amount/20;
    amount-=20*n20;
    printf("note20 =%d\n",n20);
}
if(amount>=10)
{
    n10=amount/10;
    amount-=10*n10;
    printf("note10 =%d\n",n10);
}
if(amount>=5)
{
    n5=amount/5;
    amount-=5*n5;
    printf("note5 =%d\n",n5);
}
if(amount>=2)
{
     n2=amount/2;
    amount-=2*n2;
  printf("note2 =%d\n",n2);
}
if(amount>=1)
{
  n1=amount;
  printf("note1 =%d\n",n1);
}
return 0;
}*/