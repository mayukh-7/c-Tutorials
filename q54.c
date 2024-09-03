#include<stdio.h>
void concatenate(char *dest,char *src){
    while (*dest)
    {
        dest++;
    }
    // dest ++;
    while (*src)
    {
        *dest = *src;
        src++;
        dest ++;
    }
    *dest = '\0';
    
}
int main()
{
    char str1 []= "Hello ";
    char str2[]= "world !";
    concatenate(str1,str2);
    printf("the concatenated string is  %s", str1);
    return 0;

}