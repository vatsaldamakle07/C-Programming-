#include<stdio.h>
main()
{
    char ch;
    printf("ENTER AN ALPHABET : ");
    scanf("%c",&ch);

    if (ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch =='I' || ch == 'O' || ch == 'U')
    {
        printf("Its a vowel");
    }

    else
    {
        printf("its a consonant");
    }
}


