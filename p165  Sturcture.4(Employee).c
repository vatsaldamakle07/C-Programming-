#include<stdio.h>
struct employee{
int num;
char name[100];
int salary;
}

main()
{
  struct employee e[100];
  int no,i;

  printf("\nEnter no of records =>");
  scanf("%d",&no);


  for(i=0;i<no;i++)
  {
  printf("\nEnter E1's Number=>");
  scanf("%d",&e[i].num);
  fflush(stdin);
  printf("\nEnter E1's Name=>");
  gets(e[i].name);
  printf("\nEnter E1's Salary=>");
  scanf("%d",&e[i].salary);
  }

  printf("\nNumber\tName\tSalary");
  printf("\n===================================");
  for(i=0;i<no;i++)
  {
  printf("\n%d\t%s\t%d",e[i].num,e[i].name,e[i].salary);
  }
  printf("\n===================================");
}











