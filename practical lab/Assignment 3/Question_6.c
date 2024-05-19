#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character");
    scanf("%s",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("%c is a vowel",c);
    }
    else
        printf("%c is a consonant",c);
}