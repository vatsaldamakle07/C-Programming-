
#include<stdio.h>


union Stu
{
int no;
int age;
};
main()
{
union Stu s1;


 s1.no=20;
 printf("\n\nNo = %d Age = %d",s1.no,s1.age);

 s1.age=15;
 printf("\n\nNo = %d Age = %d",s1.no,s1.age);


}
