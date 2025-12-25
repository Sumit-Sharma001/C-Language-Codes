#include<stdio.h>
#include<ctype.h>
void main()
{
    char s,f;
    printf("enter the character you want to check");
    scanf("%c",&s);
    f=toupper(s);
    if (f =='A' || f == 'E'  || f == 'I' || f == "O" || f == 'U')
    {
        printf("vouwel");
    }
    else
    printf("the character is consonant not a vouwel");

    

}