//write a programme in c to store elements in an array and print them
/*#include<stdio.h>
int main()
{
  int n,i,input[10];
  scanf("%d",&n);
  printf("enetr the elements of array\n");
  for(i=0;i<10;i++)
  {  
    scanf(" %d",&input[i]);
  }
  for(i=0;i<10;i++)
  {  
    printf("elements: %d\n",input[i]);
  }
}

//insertion an ekement to an array 
#include<stdio.h>
int main()
{
  int n,i,arr[10],emt,pos;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements of arrays\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("element : %d\n",arr[i]);
  }
  emt=6;
  pos=3;
  n++;
  for(i=n-1;i>=pos;i--)
{
  arr[i]=arr[i-1];
  
}
arr[pos-1]=emt;
 printf("print the elements of new array\n");
  for(i=0;i<n;i++)
  {
      printf("%d\n",arr[i]);
  }

}
//deletion an element to an array 
#include<stdio.h>
int main()
{
  int n,i,arr[10],pos;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements of arrays\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("element : %d\n",arr[i]);
  }
  pos=3;
  for(i=pos-1;i<n;i++)
{
  arr[i]=arr[i+1];
  
}
 printf("print the elements of new array\n");
  for(i=0;i<n-1;i++)
  {
      printf("%d\n",arr[i]);
  }

}
 #include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,arr[10],sum=0,missing;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements of arrays\n");
  for(i=0;i<n-1;i++)
  {
    scanf("%d",&arr[i]);
     sum=sum+arr[i];
  }
  for(i=0;i<n-1;i++)
  {
    printf("element : %d\n",arr[i]);
   
  }
  missing= ((n*(n+1))/2) - sum;
  printf("missing number is = %d",missing);
  
}
// reversal of an array 
 #include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,arr[10],temp,j;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements of arrays\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  
  for(i=0;i<n;i++)
  {
    printf("element : %d\n",arr[i]);
  }
printf("new array is\n");
for(i=n-1;i>=0;i--)
  {
    printf("element : %d\n",arr[i]);
  }
}*/
//merging of two array 
#include<stdio.h>
 int merge(int a[],int m, int b[], int n)
{
  int c[20],i=0,j=0,k=0;
  while(i<m && j<n)
  {
    if(a[i]<b[j])
    {
      c[k]=a[i];
      i++;
      k++;
    }
    
    else
    {c[k]=b[j];
    j++;
    k++;}
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
  for(i=0;i<m+n;i++);
  {printf("%d\n",c[m+n]);
  }
  return 0;
}

int main()
{
  int m,n,i,j,a[10],b[10];
  printf("enter number of elements of array 1\n");
  scanf("%d",&m);
  printf("enetr the elements of array 1\n");
  for(i=0;i<m;i++)
  {  
    scanf(" %d",&a[i]);
  }
  for(i=0;i<m;i++)
  {  
    printf("elements of array 1: %d\n",a[i]);
  }
   printf("enetr the elements of array 2\n");
   scanf("%d",&n);
  for(j=0;j<n;j++)
  {  
    scanf(" %d",&b[j]);
  }
  for(j=0;j<n;j++)
  {  
    printf("elements of array 2: %d\n",b[j]);
  }
  merge(a,m,b,n);
 
}

