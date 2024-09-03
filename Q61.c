#include<stdio.h>

int main(){
FILE *fptr;
fptr = fopen("myfile.txt","r");
if (fptr == NULL)
{
    printf("Error opening the file");
}
int words = 1;
char ch;
while (ch != EOF)
{
    ch = fgetc(fptr);
    if (ch == ' ' || ch == '\n')
    {
        words ++;
    }
    
}

printf("The number of words in a file are : %d", words);
fclose(fptr);
 return 0;

}