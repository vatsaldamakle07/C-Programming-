#include<stdio.h>

 void areaoftri()
{
    float b,h,area;
    printf("\nEnter the value of Base and Height : ");
    scanf("%f %f",&b,&h);
    area=0.5*b*h;

    printf("\nArea of Triangle Is %f ",area);
}

void areaofcircle()
{
    float r,area;
    printf("\nEnter Radius: ");
    scanf("%f",&r);
    area=3.14*r*r;

    printf("\nArea of circle is %f",area);
}

void max3()
{
    int a,b,c;

    printf("\nEnter the THREE numbers :");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
      printf("%d is greatest",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is greatest",b);
    }

    else if(c>a && c>b)
    {
        printf("%d is greatest",c);
    }
    else{
        printf("\nAll are equal");
    }

}

void table()
{
    int no,i,ans;
    printf("\nEnter The number for Its table: ");
    scanf("%d",&no);


    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",no,i,no*i);
    }
}

void factorial()
{
    int no,i;
    printf("\nEnter The number to get its factorial: ");
    scanf("%d",&no);

    for(i=no;i>0;i--)
    {
        printf("%d * ",i);
    }
}

void oddeven()
{
    int no;
    printf("\nEnter the number  : ");
    scanf("%d",&no);

 {
    if(no%2==0)
    {
         printf("\n%d is Even",no);
     }
    else
  {
    printf("\n%d is Odd",no);
  }
}
}

void posneg()
{
    int no;
        printf("\nEnter the number : ");
        scanf("%d",&no);
       if(no>0)
       {
           printf("\n%d is Positive ",no);
       }
       else
       {
           printf("\n%d is Negative",no);
       }
}
void cube()
{
    int i;
    printf("\nEnter The number to get its cube : ");
    scanf("%d",&i);
    printf("\nCube = %d",i*i*i);
}
main()
{
areaoftri();
areaofcircle();
max3();
table();
factorial();
oddeven();
posneg();
cube();
}
