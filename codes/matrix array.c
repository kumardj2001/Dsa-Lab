#include<stdio.h>
int main()
{
  int a[5][5],i,j,m,n;
  printf("enter the number of rows ane column\n");
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
   {  
      for(j=0;j<n;j++)
     {
       scanf("%d",&a[i][j]);
     }
   for(i=0;i<m;i++)
   {  
      for(j=0;j<n;j++)
     {
       printf("%d",a[i][j]);
     }
}

   }