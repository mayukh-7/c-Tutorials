#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char s[23] = "Happy Valentines Day. ";
    // Reading a file//
    //  ptr= fopen("myfile.txt", "r");
    //  fscanf(ptr,"%s",s);
    //  printf("The content of this file has %s\n", s);

    // Writing a file//"a"appened function is used to write a file without clearing a previous output
    
    // ptr= fopen("myfile.txt", "w");
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", s);
    // fscanf(ptr, "%s", s);
    // printf("The content of this file has %s\n", s);
    return 0;
}