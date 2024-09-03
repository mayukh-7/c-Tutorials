#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("my1file.txt","r");
    if (fptr == NULL)
    {
        printf("The file does not exists \n");
    }
    char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fprintf(fptr,"%s","MANGO");
    // char ch ;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    

    fclose(fptr);
    return 0;
}