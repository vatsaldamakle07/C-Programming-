#include<stdio.h>
void add()
{
    int a,b,add;
    printf("\nEnter value of A and B :");
    scanf("%d %d",&a,&b);
    add=a+b;
    printf("\nADDITION = %d",add);
}

void max2()
{
    int a,b,add;
    printf("\nEnter value of A and B :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
      printf("\nA is Max");
    }
    else{
        printf("\nB is MAx");
    }

}
main()

{
add();
max2();
add();

}
