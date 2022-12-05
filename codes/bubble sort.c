#include<stdio.h>
int main()
{
  int p,s,n,swap,i;
  int a[10];
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
 for(p=1;p<n;p++)
 {
    for(s=1;s<n;s++)
    {
        if(a[s]>a[s+1])
        {
          swap=a[s];
          a[s]=a[s+1];
          a[s+1]=swap;
        }
    }
 }
printf("bubble sorted array is %d\n",&a[s]);
}
