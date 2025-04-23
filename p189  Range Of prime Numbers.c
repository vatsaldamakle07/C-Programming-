#include<stdio.h>
main()
{
    int i,j,y,x,n1,n2;
    printf("Enter The Range range of number=> ");
    scanf("%d %d",&n1,&n2);

    for(i=n1;i<n2;i++)
    {
        y=i;
        x=0;
    for(j=2;j<y;j++)
    {
        if(y%j==0)
        {
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("%d  ",y);
    }

}
}
