#include<stdio.h>
struct student
{ 
    int sr_no;
  char name[100];
  int marks;
  
}s1[6];

int main()
{   int i,j;
     
    printf("enter the sr.no., name and roll no.of all five student:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d%s%d",&s1[i].sr_no,s1[i].name,&s1[i].marks);
        for(j=0;j<5;j++)
        {
           scanf("%d",&s1[i].marks[j]);
        }

    }
    printf("print the sr.no., name and roll no. of all 5 student:\n");
    
    for(i=0;i<5;i++)
    {
    printf(" sr_no: %d\n name: %s\n roll_no: %d\n " ,s1[i].sr_no ,s1[i].name, s1[i].roll_no);
    printf("\n");
    }
}
