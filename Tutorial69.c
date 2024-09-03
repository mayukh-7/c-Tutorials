#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replace(const char *str, const char *old, const char *New)
{
    char *resultstring;
    int i, count = 0;
    int newWordlength = strlen(New);
    int oldWordlength = strlen(old);
    // Lets count the number of times of old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], old) == &str[i])
        {
            count++;
            // Jump over this word
            i = i + oldWordlength - 1;
        }
    }
    // Making a new string to fit in the replaced words
    resultstring = (char *)malloc(i + count * (newWordlength - oldWordlength) + 1);
    i = 0;
    while (*str)
    {
        // Comapare the substring with result

        if (strstr(str, old) == str)
        {
            strcpy(&resultstring[i], New);
            i += newWordlength;
            str += oldWordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);
    // call the replaceword function and generate newStr
    char *newStr;
    newStr = replace(str, "{{item}}", "shoes");
    newStr = replace(newStr, "{{outlet}}", "Ram Laxmi stores");
    newStr = replace(newStr, "{{name}}", "Mayukh");
    printf("The actual bill template was : %s\n", newStr);
     printf("The generated bill has been written to the file genBill.txt\n");
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}