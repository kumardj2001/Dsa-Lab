#include<stdio.h>
#include<math.h>
int main()
{
int a[10];
int n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(int i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
int x;
printf("enter the element you want to search\n");
scanf("%d",x);
int m;
m=sqrt(n);
int i=0;
while(i<n && x>a[i])
{
  i=i+m;

if(i<n)
{
    if(a[i]==x)
    {
        printf("%d",i);
    }
    else 
    {
        int start = i-m+1;
        int end=i-1;
        for(int j=start;j<end;j++)
        {

            if(x==a[j])
            {
              printf("%d",j);
            }
        }
    }
 
}

}
return 0;
}