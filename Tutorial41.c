#include <stdio.h>
#include <string.h>
void parser(char name[])
{
int a ;
a= strlen(name);
for (int i = 5; i < a-5; i++)
{
    printf("%c", name[i]);
}

}
int main()
{
    char name[] = "<h1> This is a heading </h1>";
    parser(name);
    return 0;
}