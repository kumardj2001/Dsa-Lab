/*  *****
    *****
    *****
    *****
    *****
/*#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=5;j++)
     {
        printf("*");
     }
     printf("\n");
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
  int i,j;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf("*");
     }
     printf("\n");
  }
}   1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
  #include<stdio.h>
int main()
{
  int i,j,x=1;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf("%d ",x);
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
     for(j=1;j<=i;j++)
     {
        printf("%d ",x);
        x++;
     }
     printf("\n");
  }
} 
    A
    B C
    D E F
    G H I J
    K L M N O

#include<stdio.h>
int main()
{
  int i,j;
  char x =65;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf("%c ",x);
        x++;
     }
     printf("\n");
  }
}
    A
    B B
    C C C
    D D D D
    E E E E E
#include<stdio.h>
int main()
{
  int i,j;
  char x =65;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf("%c ",x);  
     }
     printf("\n");
      x++;
  }
  *****
  ****
  ***
  **
  *
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=6-i;j++)
     {
        printf("*");
     }
     printf("\n");
  }
   }
   11111
   1111
   111
   11
   1 
#include<stdio.h>
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
  54321
  4321
  321
  21
  1
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
  
  for(i=1;i<=5*2;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf(" ");     
     }
     for(x=5*2;x>=2*i-1;x--)
     {
       printf("*");}
    // for(k=1;k<=5-i;k++)
    // {
     //   printf("*");
     //}

      printf("\n");  
       
  }
}  /*    *
    **
   ***
  ****
 *****
 *********
  *******
   *****
    ***
     *
#include<stdio.h>
int main()
{
  int i,j,x,y,k;
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
for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf(" ");     
     }
     for(x=1;x<=6-i;x++)
     { printf("*");}
     for(k=1;k<=5-i;k++)
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
 *********
 *********
  *******
   *****
    ***
     *
#include<stdio.h>
int main()
{
  int i,j,x,y,k,l;
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
     for(l=1;l<=i-1;l++)
     {
        printf("*");
     }
     
     printf("\n");  
  }
for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf(" ");     
     }
     for(x=1;x<=6-i;x++)
     { printf("*");}
     for(k=1;k<=5-i;k++)
     {
        printf("*");
     }

      printf("\n");  
       
  }
} 

5
54
543
5432
54321
#include<stdio.h>
int main()
{
 int i,j;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++) 
 { printf("%d",5-j+1);}
 printf("\n");
 }
}


#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=6-i;j++) 
 { printf(" ");}
  for(k=1;k<=i;k++)
 { printf("%d",k);}

 printf("\n");
 }

}
1
23
345
4567
#include<stdio.h>
int main()
{
 int i,j,x=1;
 for(i=1;i<5;i++)
 {
  for(j=1;j<=i;j++) 
 { printf("%d",i+j-1);
 }
 printf("\n");
 }
}
#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=1;i<=5;i++)
 {
 for(k=1;k<=i;k++)
 { printf("%d",k);}
 printf("\n");
}}*/ 
