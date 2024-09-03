#include <stdio.h>
#include <string.h>

int main()
{
    char s1[7];
    printf("Enter the string\n");
    gets(s1);
    char s2[7];
    strcpy(s2, s1);
    printf("Enterd string %s\n", s1);
    printf("Reversed string %s\n", strrev(s1));
    if (strcmp(s1, s2))
    {
        printf("the string is not in palindrome\n");
    }
    else
    {
        printf("the string is in palindrome\n");
    }
    // printf("string s1 is changed to %s\n", s1);
    return 0;
}