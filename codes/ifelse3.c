/*write a program to find greatest of three numbers.
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
//write a program to input angles of triangle and check wehether triangle is valid or not.
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter values of triangles\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b+c==180)
  printf("triangle is valid\n");
  else 
  printf("not a valid triangle\n");
  return 0;
}
//write a porgaram to in[ut all sides o triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter three sides\n");
  scanf("%d%d%d",&a,&b,&c);
  printf("first side is %d\n",a);
  printf("second side is %d\n",b);
  printf("third side is %d\n",c);
  if(a+b>c||a+c>b||b+c>a)
  printf("triagle is valid");
  else 
  printf("triangle is not valid");
  return 0;
}
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter three sides\n");
  scanf("%d%d%d",&a,&b,&c);
  printf("first side is %d\n",a);
  printf("second side is %d\n",b);
  printf("third side is %d\n",c);
  if(a+b>c&&a+c>b&&b+c>a)
  printf("triagle is valid");
  else 
  printf("triangle is not valid");
  return 0;
}
//write a program to check whether a triangle is isosclese ,equiilateral or scalene?
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter three sides of triangle\n");
  scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
  { printf("valid triangle\n");
  if(a=b=c)
  printf("equilateral triangle");
  else if(a=b!=c)
  printf("isoslese triangle");
  else if(a!=b!=c)
  printf("scalene triangle");}
  return 0;
}
//write a program to calculate profit or loss.
#include<stdio.h>
int main()
{ 
  int cp,sp,profit,loss;
  printf("enter cost price\n");
   scanf("%d",&cp);
   printf("enter selling price\n");
   scanf("%d",&sp);
   profit=sp-cp;
   loss=cp-sp;
  if(sp>cp)
    printf("profit is %d\n",profit); 
    else
    printf("loss is %d\n",loss);
    return 0;
}*/
/*write a c program to input marks of five subject and calculate percentage and grade 
according to foollowing
#include<stdio.h>
int main()
{
  int a,b,c,d,e,per,grade;
  printf("enter marks of a\n");
  scanf("%d",&a);
  printf("enter marks of b\n");
  scanf("%d",&b);
  printf("enter marks of c\n");
  scanf("%d",&c);
  printf("enter marks of d\n");
  scanf("%d",&d);
  printf("enter marks of e\n");
  scanf("%d",&e);
  per=(a+b+c+d+e)/5;
  printf("percentage is %d\n",per);
  if(per>=90)
  printf("grade A");
   else if(per>=80&&per<90)
  printf("grade B");
    else if(per>=70&&per<80)
  printf("grade C");
   else if(per>=60&&per<70)
  printf("grade D");
   else if(per>=50&&per<=60)
  printf("grade E");
  else if(per>=40&&per<=50)
  printf("grade E");
  else if(per<40)
  printf("fail");
  return 0;
}*/
#include<stdio.h>
int main()
{
  int a,b,c,d,e,per,grade;
  printf("enter marks of a\n");
  scanf("%d",&a);
  printf("enter marks of b\n");
  scanf("%d",&b);
  printf("enter marks of c\n");
  scanf("%d",&c);
  printf("enter marks of d\n");
  scanf("%d",&d);
  printf("enter marks of e\n");
  scanf("%d",&e);
  per=(a+b+c+d+e)/5;
  printf("percentage is %d\n",per);
  if(per>=90)
  printf("grade A");
   else if(per>=80)
  printf("grade B");
    else if(per>=70)
  printf("grade C");
   else if(per>=60)
  printf("grade D");
  else if(per>=40)
  printf("grade E");
  else if(per<40)
  printf("fail");
  return 0;
}
