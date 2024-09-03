#include<stdio.h>

int main(){
FILE *fptr;
fptr = fopen("student.txt","r");
if (fptr == NULL)
{
    printf("Error opening the file");
    return 1;
}
int s = 0,c=0,t=0,l=0;
char ch;
while ((ch = fgetc(fptr)) != EOF)
{
    c++;
    if (ch == ' ')
    {
        s++;
    }
    if (ch == '\t')
    {
        t++;
    }
    if (ch == '\n')
    {
        l++;
    }
    // words ++;
}

printf("character:  %d \n lines : %d \n spaces : %d \n tabs : %d \n", c,l,s,t);
fclose(fptr);
 return 0;

}