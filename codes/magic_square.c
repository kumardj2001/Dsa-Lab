#include<stdio.h>
int main()
{
  int a[10][10];
  int m,n,k=0,i,j;
  printf("enter the size of rows and column\n");
  scanf("%d%d",&m,&n);
  printf("enter the elements of rows and column\n");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
  scanf("%d",&a[i][j]);
   }
  }
for(int i=0;i<m;i++)
   {  
      for(int j=0;j<n;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
}
int sum =a[0][0]+a[0][1]+a[0][2];
for(int i=1;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    if( a[i][j]+a[i][j+1]+a[i][j+2]==sum)
    {
      
    }
  }
}
}