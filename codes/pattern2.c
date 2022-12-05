/*#include<stdio.h>
int main()
{
  int i,j,x=1;
  for(i=1;i<=5;i++)
  {
     for(j=5;j>=i;j--)
     {
        printf("%d" ,x);
     }
     printf("\n");
  }
  }
   #include<stdio.h>
int main()
{
  int i,j,x=1;
  for(i=1;i<=5;i++)
  {
     for(j=5;j>=i;j--)
     {
        printf("%d ",j);
        
     }
     printf("\n");

  }
  }
   #include<stdio.h>
int main()
{
  int i,j,x=1;
  for(i=1;i<=5;i++)
  {
     for(j=5;j>=i;j--)
     {
        printf("%d ",j);
        x++;
     }
     printf("\n");

  }
  }
      #include<stdio.h>
int main()
{
  int i,j,x=1;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=6-i;j++)
     {
        printf("%d ",j);
        x++;
     }
     printf("\n");

  }
  }
  #include<stdio.h>
int main()
{
  int i,j,x=1;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=6-i;j++)
     {
        printf("%d ",x);
         x++;
     }
     printf("\n"); 
     x=1;
  }
  }
      #include<stdio.h>
int main()
{
  int i,j,x=65;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=6-i;j++)
     {
        printf("%c ",x);
        
     }
     printf("\n"); 
     x++;
  }
}




#include<stdio.h>
int main()
{
  int i,j,x,y,k,h,l,m;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=10-i;j++)
     {
        printf(" ");   
     }
     for(x=1;x<=i;x++)
     {
        printf("*");
     }
     for(y=1;y<=i-1;y++)
     {
        printf("*");
     }
     for(l=1;l<=11-i;l++)
     {
         printf(" ");
     }
     for(m=1;m<=10-i;m++)
     {
         printf(" ");
     }
     for(x=1;x<=i;x++)
     {
        printf("*");
     }
     for(y=1;y<=i-1;y++)
     {
        printf("*");
     }
     printf("\n");  
     }
     for(i=1;i<=20;i++)
     {
     for(j=1;j<=i;j++)
     {
        printf(" ");     
     }
     for(x=1;x<=19-i;x++)
     { 
         printf("*");  
     } 

     for(h=1;h<=20-i;h++)
     {
          printf("*");
     }
      printf("\n");
  }
}
 #include<stdio.h>
 int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
   for(j=1;j<=5-i;j++)
   {printf(" ");
  }
  for(j=1;j<=2*i-1;j++)
   {printf("*");
   }
   printf("\n");
}
 for(i=5;i>=1;i--)
  {
 for(j=5;j>=i;j--)
   {printf(" ");
  }
   for(j=2*(i)-2;j>1;j--)
   {printf("*");
  }
  printf("\n");
}
}

1
23
345
4567
56789
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
   for(j=1;j<=i;j++)
{
  printf("%d",i+j-1);
}
printf("\n");
}
}

1
23
456
78910
#include<stdio.h>
int main()
{
int i,j,k;
k=1;
for(i=1;i<=5;i++)
{
   for(j=1;j<=i;j++)
{
  printf(" %d ",k);
  k++;
}
printf("\n");
}
}
      1
     2 3
    3 4 5
   4 5 6 7
  5 6 7 8 9
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
   for(j=5;j>=i;j--)
{
 printf(" ");
} 
for(j=1;j<=i;j++)
{
   printf(" %d",i+j-1);
}
 printf("\n");
}
}

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
   for(j=5;j>=i;j--)
{
 printf(" ");
} 
for(j=1;j<=i;j++)
{
   printf("%d",j);
}
 printf("\n");
}
}
A
BB
CCC
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=3;i++)
{ 
   for(j=1;j<=i;j++)
{
   printf("%c",64+i);
}
 printf("\n");
}
}
 A 
 B  C 
 C  D  E 
 D  E  F  G 
 E  F  G  H  I
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=5;i++)
{ 
   for(j=1;j<=i;j++)
{
   printf(" %c ",64+i+j-1);
}
 printf("\n");
}
}
#include<stdio.h>
int main()
{
 int i,j;
for(i=5;i>=1;i--)
{ 
   for(j=5;j>=i;j--)
{
   printf(" %c ",64+i);
}
 printf("\n");
}
}
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
     for(j=1;j<=4;j++)
     {  if(i==1||i==4||j==4-i+1)
        printf("*");
        else
        printf(" ");
     }
     printf("\n");
  }
}*/

flag(int n, int m, int flag)
{
  if((n==m)&&flag==0)
  return;
if(flag==1)
{
   if(m-5>0)
  { printf("%d",m);
   flag(n,m-5,1);}
   else
   flag(n,m-5,0);
}
printf("%d",m);
flag(n,m+5,0)
}

#include<stdio.h>
int main()
{
}