#include <stdio.h>
#include <string.h>

int main()
{
    char str1[77];
    char str2[77];
    char str3[77] = " is a friend of ";
    printf("Enter Your first String !! \n");
    gets(str1);
    printf("Enter Your second String !! \n");
    gets(str2);
    // puts(strcat(str1,str3));
    puts(strcat(strcat(str1, str3), str2));
    return 0;
}