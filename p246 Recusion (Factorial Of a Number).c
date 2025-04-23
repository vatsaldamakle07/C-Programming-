#include<stdio.h>

int fact(int a)
{
    int ans;
    if(a==0)
    {
        return 1;
    }
    else
    {
        ans=a*fact(a-1);
    }
    return ans;
}
main()
{
    int a,ans;
    printf("Enter value : ");
    scanf("%d",&a);
    ans=fact(a);
    printf("\n Answer : %d",ans);
}
