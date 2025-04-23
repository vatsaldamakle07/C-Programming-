#include<stdio.h>
struct book{
int bid;
char bname[100];
int bprice;
}

main()
{
    struct book b1,b2,b3;

    printf("\nEnter b1's id =>");
    scanf("%d",&b1.bid);
    fflush(stdin);
    printf("\nEnter b1's bname =>");
    gets(b1.bname);

    printf("\nEnter b1's bprice =>");
    scanf("%d",&b1.bprice);

    printf("\nEnter b2's id =>");
    scanf("%d",&b2.bid);
    fflush(stdin);
    printf("\nEnter b2's bname =>");
    gets(b2.bname);

    printf("\nEnter b2's bprice =>");
    scanf("%d",&b2.bprice);

    printf("\nEnter b3's id =>");
    scanf("%d",&b3.bid);
    fflush(stdin);
    printf("\nEnter b3's bname =>");
    gets(b3.bname);

    printf("\nEnter b3's bprice =>");
    scanf("%d",&b3.bprice);


    printf("\nB1's Bid = %d BookName = %s Bprice = %d",b1.bid,b1.bname,b1.bprice);
    printf("\nB2's Bid = %d BookName = %s Bprice = %d",b2.bid,b2.bname,b2.bprice);
    printf("\nB3's Bid = %d BookName = %s Bprice = %d",b3.bid,b3.bname,b3.bprice);
}
