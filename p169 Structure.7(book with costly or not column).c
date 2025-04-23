#include<stdio.h>
struct book{
int bid;
char bname[100];
int bprice;
}

main()
{
    struct book b[100];
    int no,i;
    printf("Enter The number of Books: ");
    scanf("%d",&no);

   for(i=0;i<no;i++)
   {
    printf("\nEnter b1's id =>");
    scanf("%d",&b[i].bid);
    fflush(stdin);
    printf("\nEnter b1's bname =>");
    gets(b[i].bname);
    printf("\nEnter b1's bprice =>");
    scanf("%d",&b[i].bprice);
   }

   printf("\nBid\tBookNAme\tBprice");
   printf("\n==========================");

    for(i=0;i<no;i++)
   {
    if(b[i].bprice>200)
    {
        printf("\n%d\t%s\t%d\tcostly",b[i].bid,b[i].bname,b[i].bprice);
    }
    else{
        printf("\n%d\t%s\t%d\tsasti",b[i].bid,b[i].bname,b[i].bprice);
    }

   printf("\n==========================");
}
}


