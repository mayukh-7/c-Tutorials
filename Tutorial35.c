#include <stdio.h>
#include <string.h> //String.h is basically a library in C language //
int main()
{
    char s1[] = "Mayukh ";
    char s2[] = "Maity";
    char s3[77];
    printf("The length of the string s1 is %d and  s2 is %d \n ", strlen(s1), strlen(s2)); // strlen function is used to calculate the length of the string
    // puts(strcat(s1, s2));// strcat function is used to combine two strings //
    // printf("The Reverse of String s1 is %s  The Reverse of String s2 is %s  \n",strrev(s1),strrev(s2));// strrev function is used to Reverse the string
    strcpy(s3, strcat(s1, s2)); // strcpy function is used to copy strcat to s3//
    puts(s3);
    strcmp(s1, s2); // strcmp function is used to compare two string and return the difference of their ASCII values
    printf("The difference in the String is %d \n", strcmp(s1, s2));
    return 0;
}
