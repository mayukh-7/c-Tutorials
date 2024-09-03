#include <stdio.h>
void printstar(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf(" \n");
}

int main()
{
    // char   str[] = {'M','a','y','u','k','h','\0'};
    char str1[] = "Mayukh";
    printf("using printf functions\n %s \n", str1);
    char str[77];
    printf("Give your input  \n");
    gets(str);
    printf("using function \n");
    printstar(str);
    printf("using puts function \n");
    puts(str);
    char arr[77] = "Kelly";
    printf("using printf functions\n %s \n", arr);

    return 0;
}
