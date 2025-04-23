#include<stdio.h>

main()
{
    FILE *f1;
    char ch;
    int u=0,l=0;
    f1=fopen("d:\\abc.txt","r");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(isupper(ch))
        {
            u++;
        }
        else if(islower(ch))
        {
            l++;
        }
    }

    fclose(f1);
    printf("\nUpper = %d",u);
    printf("\nLower= %d",l);
}

