#include<stdio.h>

main()
{
    FILE *f1;
    char ch;
    int c=0;
    f1=fopen("d:\\abc.txt","r");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {

        }
        else
        {
            printf("%c",ch);
        }
    }

    fclose(f1);
    printf("\nVowel = %d",c);
}

