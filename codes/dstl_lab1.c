//program for merging of two sets........
/*#include<stdio.h> 
 int main()
{
  int m,n,i,j,a[10],b[10],k,c[20];
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
   printf("enetr the no. of elements of array 2\n");
   scanf("%d",&n);
   printf("enter the elements of array 2\n");
  for(j=0;j<n;j++)
  {  
    scanf(" %d",&b[j]);
  }
  for(j=0;j<n;j++)
  {  
    printf("elements of array 2: %d\n",b[j]);
  }
   i=0,j=0,k=0;
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
  printf("merge array is\n");
  for(k=0;k<(m+n);k++)
  { 
    printf(" %d ",c[k]);
  }
  return 0;
}


//program for unioin of two sets..........

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

//program for intersection of two sets.........

#include<stdio.h>
int main()
{
  int m,n,a[10],b[10],i,j,k,c[20];
  printf("Enter the size of array1\n");
  scanf("%d",&m);
  printf(" Enter the elements of aaray1\n");
  for(i=0;i<m;i++)
{
  scanf("%d",&a[i]);
}
 printf("Enter the size of array2\n");
  scanf("%d",&n);
  printf(" Enter the elements of aaray1\n");
  for(j=0;j<n;j++)
{
  scanf("%d",&b[j]);
}
i=0,j=0,k=0;
while(i<m&&j<n)
{
  if(a[i]<b[j])
  {
  i++;
  j++;}
  else if(a[i]>b[j])
  {
    i++;
    j++;
  }
  else
  { 
    c[k]=a[i];
    i++;
    j++;
    k++;
  }
}
printf("the intersection is\n");
for(i=0;i<k;i++)
{
   printf(" %d ",c[i]);
}
}*/
// program for set difference.......

#include<stdio.h>
int main()
{
  int m,n,a[10],b[10],i,j,k,c[20];
  printf("Enter the size of array1\n");
  scanf("%d",&m);
  printf(" Enter the elements of aaray1\n");
  for(i=0;i<m;i++)
{
  scanf("%d",&a[i]);
}
 printf("Enter the size of array2\n");
  scanf("%d",&n);
  printf(" Enter the elements of aaray1\n");
  for(j=0;j<n;j++)
{
  scanf("%d",&b[j]);
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
  else if(a[i]>b[j])
  { 
    j++;
  }
  else
  { 
    i++;
    j++;
    
  }
}
while (i<m)
{
    c[k]=a[i];
    i++;
    k++;
}
printf("the set diference is\n");
for(i=0;i<k;i++)
{
   printf(" %d ",c[i]);
}
}

//symmetric difference.
 #include<stdio.h>
int check(int x, int *y){
    for (int i=0; i<7; i++){
        if (x == *(y+i))
            return 0;
    }
    return 1;
}

void main(){
    int a[10]={1, 2, 3, 4, 7, 6, 7, 10, 9, 10}, b[7]={1, 2, 3, 44, 5, 6, 7}, c[7], d[10];  
    int j=0;
    for(int i=0; i<7; i++){
        if(check(b[i], &c[0])){
            if(!check(b[i], &a[0])){
                c[j]=b[i];
                j++;
            }
        }
    }

    int w=0;
    for(int i=0; i<10; i++){
        if(check(a[i], &c[0])){
            if(check(a[i], &d[0])){
                d[w]=a[i];
                w++;
            }
        }
    }

    int v=0;
    for(int i=0; i<7; i++){
        if(check(b[i], &c[0])){
            if(check(b[i], &d[0])){
                d[w+v]=b[i];
                v++;
            }
        }
    }

    for(int i=0; i<w+v; i++){
        printf("%d ", d[i]);
    }
}