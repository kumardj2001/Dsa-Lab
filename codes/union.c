#include<stdio.h> 
 int main()
{
  int m,n,i,j,a[10],b[10],k,c[20];
  printf("enter size of array 1\n");
  scanf("%d",&m);
  printf("enetr elements of array 1\n");
  for(i=0;i<m;i++)
  {  
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {  
    printf("elements of array 1: %d\n",a[i]);
  }
   printf("enetr the size of array 2\n");
   scanf("%d",&n);
   printf("enter the elements of array 2\n");
  for(j=0;j<n;j++)
  {  
    scanf("%d",&b[j]);
  }
  for(j=0;j<n;j++)
  {  
    printf("elements of array 2: %d\n",b[j]);
  }
   i=0,j=0,k=0;
  while(i<m&&j<n)
  {
    if(a[i]<b[j])
    {
      c[k]=a[i];
      i++;
      k++;
    }
    
    else if( a[i]>b[j])
 { 
    c[k]=b[j];
    j++;
    k++;
    }
    else
   {
   c[k]=a[i];
    i++;
    j++;
    k++;
   }
  }
  while(i<m)
  {
    c[k]=a[i];
    k++;
    i++;
  }
  while(j<n)
  {
    c[k]=b[j];
    k++;
    j++;
  }
  printf("union of the array is");
  for(i=0;i<k;i++)
  {
    if (c[i]!=c[i+1])
    printf(" %d  ",c[i]);
  } 
  return 0;
}