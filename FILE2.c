#include<stdio.h>
int main(){
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("my1file.txt","r");
    fptr2 = fopen("Copy.txt", "a");
    char ch;
    ch = fgetc(fptr1);
    while (ch != EOF)
    {
        fprintf(fptr2,"%c", ch);
       ch = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}