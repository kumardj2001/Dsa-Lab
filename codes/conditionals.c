//prime number
/*#include<stdio.h>
int main()
{ 
    int n,i,count=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
          count++;
      }
    }
     if(count==2)
     {
         printf("prime number\n");
     }
     else
     {  
         printf("not a prime number");
     }
     return 0;
    }

// palindrome number
#include<stdio.h>
int main()
{ 
    int n,r,sum=0,temp;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
      #include<stdio.h>
int main()
{  r=n%10;
   sum=(sum*10)+r;
   n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");

    }
}
//armstrong number
#include<stdio.h>
int main()
{ int n,r,sum=0,temp;
  printf("enter a number\n");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
   r=n%10;
   sum=sum+(r*r*r);
   n=n/10;
  }
  n=temp;
  if(n==sum)
  {
      printf("armstromg number");
  }
  else
  {
      printf("not an armstromg number");
  }
  return 0;
}

//fibonacci series
#include<stdio.h>
int main()
{
  int n,i,a=0,b=1,c;
  printf("enter limit\n");
  scanf("%d",&n);
  for(i=0;i<=7;i++)
  {
      printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
  }
  }
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
      printf(" c is greatest");
      }
    else if(b>c)
         printf("b is greatest");
       else
         printf("c is greatest");
    
    return 0;
    }
*/

