#include<stdio.h>
struct acc{
long int accno;
char accholdername[100];
int balance;
};
main()
{
     struct acc n[100];
    int i,balance,no;

    printf("ENTER THE NUMBER OF ACCOUNTS :");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        printf("\nACCOUNT NO(%d): ",i);
        scanf("%d",&n[i].accno);
        fflush(stdin);

        printf("\nAccount holder Name(%d): ",i);
        scanf("%s",&n[i].accholdername);

        printf("\nACCOUNT BALANCE(%d): ",i);
        scanf("%d",&n[i].balance);
    }
    printf("\n\nACCOUNT WITH BALANCE LESS THAN 50000 ARE MENTIONED BELOW!!");

    printf("\n\n\nACC_NO\tHOLDER_NAME\tBALANCE");
    printf("\n=====================================");

    for(i=1;i<=no;i++)
    {
    if(n[i].balance<5000)
    {
      printf("\n%d\t%s\t\t%d",n[i].accno,n[i].accholdername,n[i].balance);
    }
    }
    printf("\n=====================================");


}
