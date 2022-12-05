      
  54321
  4321
  321
  21
  1

   #include<stdio.h>
int main()
{
  int i,j,;
  for(i=1;i<=5;i++)
  {
     for(j=5;j>=i;j--)
     {
        printf("%d ",j);
     }
     printf("\n");

  }
  }
  12345
  1234
  123
  12
  1

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
  12345
  1234
  123
  12
  1
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
  AAAAA
  BBBB
  CCC
  DD
  E
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
    *
   **
  ***
 ****
*****
  #include<stdio.h>
int main()
{
  int i,j,x;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=6-i;j++)
     {
        printf(" ");   
     }
     for(x=1;x<=i;x++)
     {
        printf("*");
     }
     printf("\n"); 
     
  }
}
    *
   ***
  *****
 *******
#include<stdio.h>
int main()
{
  int i,j,x,y;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=6-i;j++)
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
} 
*****
 ****
  ***
   **
    *
#include<stdio.h>
int main()
{
  int i,j,x;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf(" ");     
     }
     for(x=1;x<=6-i;x++)
     { printf("*");}

      printf("\n");  
       
  }
}  
 *********
  *******
   *****
    ***
     *    */
#include<stdio.h>
int main()
{
  int i,j,x,k;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf(" ");     
     }