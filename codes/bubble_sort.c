#include<stdio.h>
int main()
{
  int s,n,swap,i,j,flag=0;
  int a[10];
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}

 {for(i=1;i<=n-1;i++)
 {   if(flag=0)
   { for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
          swap=a[j];
          a[j]=a[j+1];
          a[j+1]=swap;
        } 
    }
    flag++;
 }
 }
  printf("%d",i);
return 0;
}
}
/*
#include<stdio.h>
int main()
{
  int n,i,k,j;
  int a[10];
  int b[10];
  int c[10];
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  c[a[i]]++;
}
for(i=1;1<k;i++)
{

c[i]=c[i]+c[i-1];
}
for(j=n-1;j>=0;j--)
{
    b[c[a[j]]-1]=a[j];
    c[a[j]]=c[a[j]]-1;
}
for(i=0;i<)
printf("%d",b[i]);
}*/