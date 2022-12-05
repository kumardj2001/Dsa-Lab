#include<stdio.h>
int linear_search(int a[],int n,int x)
{
 int i=0;
while(i<=n) 
{
    if(a[i]==x)
    {
        return 1;
    }
     i++;
    return 0;
}

}
int main()
{  
  int a[10];
  int n,x;
  printf("enter the size of array\n");
  scanf("%d",&n);
  printf("enter th elements of array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    }
  printf("enter the elment you want to search");
  scanf("%d",&x);
 int ans= linear_search(a,n,x);
 if(ans==-1)
 {
    printf("element is not found\n");
 }
 else
 printf("index of element is %d",ans);
 return 0;
}